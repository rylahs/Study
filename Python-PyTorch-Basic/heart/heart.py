# 파이썬 패키지 수입
import pandas as pd # pandas는 2차원 테이블에 특화된 패키지 (행,열 구성)
import matplotlib.pyplot as plt # 그래프 그릴 때 사용
import seaborn as sns # matplot 과 연동 flot을 만들어 줌

from time import time # 총 걸린 시간 계산

import torch
from torch import nn # torch -> nn use 층 구조 제공

from sklearn.model_selection import train_test_split # 심장병 데이터를 학습용, 평가용으로 나눌 때 사용
from sklearn.preprocessing import StandardScaler # Z점수 정규화를 할 때 사용
from sklearn.metrics import f1_score # 정확도를 판단할 때 사용


# 하이퍼 파라미터
INPUT_DIM = 13 # 총 14개의 파라미터 중 13개가 입력 요소
# INPUT_DIM = 11 # 두개 요소를 삭제
# INPUT_DIM = 9 # 두개 요소를 더 삭제
MY_HIDDEN = 1000 # DNN의 은닉 층에서 몇개를 사용할 지 결정 (DNN 규모)
MY_EPOCH = 1000 # 몇 번 반복해서 학습할 것인지 지정

# 추가 옵션 정리

# 1. 임의의 수 씨앗 삭제
# - 기계학습에서 가중치의 초기 값은 임의의 숫자로 출발
# - 가중치의 출발점이 어디인지에 따라 도착점도 달라진다.
# - 도착점이 달라지면 최종 정확도도 달라진다.
# - 임의의 수 생성 알고리즘의 씨앗이 이를 예방해준다.
#  -> 매번 실행 때 같은 임의의 수를 생성

pd.set_option('display.max_columns', None) # pandas의 display.max_columns 옵션을 off , 기본 값은 on,
                                           # pandos가 dataframe을 출력 할 때 생략해버림, 생략 없이 하기 위해서 끔
torch.manual_seed(111) # pytorch의 씨앗을 정함 임의의 수를 정하는 알고리즘, 랜덤 시드값을 주기 위함
import numpy as np
np.random.seed(111) # numpy의 랜덤 시드값, 임의의 수 생성 및 지정


# 데이터 파일 읽기
# 결과는 pandas의 데이터 프레임 형식
raw = pd.read_csv('heart.csv')

# 데이터 100개만 사용
# raw.drop(raw.index[100:], inplace=True) # inplace 옵션을 사용
# raw = raw.drop(raw.index[100:]) # inplace가 싫으면 다시 드랍해서 받으면 된다.

# 데이터 원본 출력
print('원본 데이터 샘플 10개')
print(raw.head(10))
print('원본 데이터 통계')
print(raw.describe()) # 통계를 보여주는 describe


# 데이터를 입력과 출력으로 분리
X_data = raw.drop('target', axis=1)

# 심장병 fbs, chol 삭제
# X_data.drop('fbs', axis=1, inplace=True) # axis = 1 : 열
# X_data.drop('chol', axis=1, inplace=True)

# 심장병 trestbps, ca도 삭제
# X_data.drop('trestbps', axis=1, inplace=True) # axis = 1 : 열
# X_data.drop('ca', axis=1, inplace=True)

Y_data = raw['target']
names = X_data.columns # 데이터의 이름들을 따와서 저장
print(names)


# 데이터를 학습용과 평가용으로 분리
X_train, X_test, Y_train, Y_test = \
    train_test_split(X_data, Y_data, test_size=0.3) # 데이터를 무작위로 추출

# 최종 데이터 모양
print('\n학습용 입력 데이터 모양 : ', X_train.shape)
print('학습용 출력 데이터 모양 : ', Y_train.shape)
print('평가용 입력 데이터 모양 : ', X_test.shape)
print('평가용 출력 데이터 모양 : ', Y_test.shape)

# 입력 데이터 Z-점수 정규화
# 결과는 numpy의 n-차원 행렬 형식

scaler = StandardScaler() # StandardScaler를 짧게 정의
# from sklearn.preprocessing import MinMaxScaler
# scaler = MinMaxScaler()
X_train = scaler.fit_transform(X_train) # fit_transform을 사용해서 13개의 요소를 한번에 Z-점수 평균화 진행
X_test = scaler.fit_transform(X_test) # 평가용 데이터에도 같은 Z-점수 평균화 진행
print('전환 전 : ', type(X_train))
# 호환이 완벽하지 않아서 자료 형변환이 필요함

# numpy에서 pandas로 전환
# header 복구가 필요 => 그래서 names를 미리 따둬야 한다.
X_train = pd.DataFrame(X_train, columns=names)
X_test = pd.DataFrame(X_test, columns=names)
print('전환 후 : ', type(X_train))

# 정규화 된 학습용 데이터 출력
# count : 갯수 , mean : 평균, std : 표준편차 : 거의 1
print('\n정규화된 학습용 데이터 샘플 10개')
print(X_train.head(10))
print('정규화된 학습용 데이터 통계')
print(X_train.describe())

# 학습용 데이터 상자 그림
sns.set(font_scale=2)
# sns.boxplot(data=X_train, palette="colorblind")
# plt.show()

# PyTorch DNN을 Sequential 모델로 구현
model = nn.Sequential(
    nn.Linear(INPUT_DIM, MY_HIDDEN), # 입력층 , 첫번째 은닉층 추가 , 13 , 1000 , multiply Accumulate (선형 1차 방정식)
    nn.Tanh(),
    # nn.ReLU(),
    # nn.Sigmoid(),
    nn.Linear(MY_HIDDEN, MY_HIDDEN), # 두번째 은닉층 뉴런 계산
    nn.Tanh(),
    # nn.ReLU(),
    # nn.Sigmoid(),

    # 은닉층 5000 추가
    # nn.Linear(MY_HIDDEN, 5000),
    # nn.Tanh(),

    # nn.Linear(5000, 1), # 은닉층이 추가 된 최종 출력층
    nn.Linear(MY_HIDDEN, 1), # 최종 출력층은 하나
    nn.Sigmoid()
)

# DNN 요약
print('\nDNN 요약')
print(model)

# 총 파라미터 수 계산
total = sum(p.numel() for p in model.parameters())
print('총 파라미터 수: {:,}'.format(total))

# 최적화 함수와 손실함수 지정
optimizer = torch.optim.SGD(model.parameters(), lr=0.01) # 최적화 함수 SGD
# optimizer = torch.optim.Adam(model.parameters(), lr=0.01) # 최적화 함수 Adam
# optimizer = torch.optim.RMSprop(model.parameters(), lr=0.01) # 최적화 함수 RMSProp
criterion = nn.MSELoss() # 손실함수 MSE 지정


# 학습용 데이터 전환
# pandas dataframe에서 Pytorch 텐서로

print('전환 전: ', type(X_train))
X_train = torch.tensor(X_train.values).float() #모든 데이터를 소수로 변경하는 코드 포함
Y_train = torch.tensor(Y_train.values).float() #모든 데이터를 소수로 변경하는 코드 포함

print('전환 후: ', type(X_train))

# DNN 학습
begin = time()
print('\nDNN 학습 시작')

for epoch in range(MY_EPOCH): #현재 MY_EPOCH : 1000
    output = model(X_train) # 하나하나 꺼내가며 순방향 계산 후 output에 저장 , 2차원 torch tensor 212, 1
    if (epoch == 0):
        print(X_train.shape)
        print(output.shape)

    #출력값 차원을 (212, 1) 에서 (212,)로 조정
    output = torch.squeeze(output)
    if (epoch == 0):
        print(output.shape)

    # 손실값 계산
    loss = criterion(output, Y_train) # 손실값을 역전파로 사용 , 1차원 torch.tensor

    # 손실값 출력
    if (epoch % 10 == 0):
        print('EPOCH : {:3},'.format(epoch),
              'Loss : {:.3f}'.format(loss.item()))

    # 역전파 알고리즘으로 가중치 보정
    optimizer.zero_grad() # 기울기를 0으로 초기화하는 작업을 하는 함수
    loss.backward() # 역전파 알고리즘을 부릅니다.
    optimizer.step() # 시냅스의 보정치를 구하고 가중치를 더함

end = time()

print('\n최종 학습 시간 : {:.1f}초'.format(end - begin))


########## 인공 신경망 평가 #############

# 평가용 데이터 전환
# pandas dataframe ==> pytorch Tensor
X_test = torch.tensor(X_test.values).float()

# DNN으로 추측, 가중치 관련 계산 불필요
with torch.no_grad(): # 기울기 관련된 작업을 건너 뜀 , 평가시간, 메모리 절약 가능 , 자율 주행 차량에 대한 사고 방지 등
    pred = model(X_test)

print(pred.flatten())

# 추측 결과 tensor를 numpy로 전환
pred = pred.numpy() # 91개의 심장병 결과를 확률로 저장

# 확률을 2진수로 전환 후 F1 점수 계산
pred = (pred > 0.5) # true false
# print(pred.flatten())

print('추측 값 : ', pred.flatten())
print('정답 : ', Y_train.flatten())


f1 = f1_score(Y_test, pred)
print('\n최종 정확도 (F1 점수): {:.3f}'.format(f1))







