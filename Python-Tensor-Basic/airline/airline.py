import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'

# 파이썬 패키지 가져오기
import pandas as pd # 2차원 데이터 특화
import numpy as np # n차원 행렬
import matplotlib.pyplot as plt # 데이터 시각화
import seaborn as sns # 데이터 시각화

from time import time # 시간 측정
from sklearn.preprocessing import MinMaxScaler # 데이터 정규화

# RNN 구현용
from keras.models import Sequential # 순차적인 인공신경망 만들 때 사용
from keras.layers import InputLayer, Dense # 입력층을 구현 / 인공 신경망의 각 층을 연결할 때 사용
from keras.layers import LSTM
from keras.layers import Embedding
# 하이퍼 파라미터
MY_PAST = 12 # 시 계열 데이터 중 몇 개의 숫자를 입력 값으로 사용할 지 정함 / 12달치의 여행자 수를 RNN의 입력 값으로 사용,
             # 13번째 달의 여행자수를 예측
MY_SPLIT = 0.8 # 데이터를 얼마만큼 학습용으로 사용할 것인지 결정, 0.8 == 80%
MY_UNIT = 300 # LSTM 안의 내부의 차원 수를 결정함
MY_SHAPE = (MY_PAST, 1) # keras LSTM은 2차원 데이터, LSTM 입력으로 들어갈 데이터의 모양

MY_EPOCH = 300 # 반복 학습 수
MY_BATCH = 64 # 병렬 계산 데이터 수

np.set_printoptions(precision=3) # 소수점 3번째 자리까지 출력

# 데이터 파일 읽기
# 결과는 pandas의 데이터 프레임 형식
raw = pd.read_csv('airline.csv',
                  header=None,
                  usecols=[1]) # 날짜는 사용하지 않고, 여행객 수만 사용하기 위해 1번째 cols 사용

# 시계열 데이터 시각화
# plt.plot(raw)
# plt.show()

# 데이터 원본 출력
print('원본 데이터 샘플 13개')
print(raw.head(13))

print('\n원본 데이터 통계')
print(raw.describe())

# MinMax 데이터 정규화 이론
# 데이터를 [0, 1]로 스케일링 x = x - min(x) / max(x) - min(x)
# 특이점이 많은 데이터에서는 힘이 약해진다. (Outlier)
# 가장 인기 있는 정규화 Z점수수 정규화(StandardScaler), MinMaxScaler, RobustScaler, Normalizer
# RobustScaler : 아웃라이어에 약한 MinMax 단점 개선
# Normalizer : 데이터의 크기보다 방향이 더 중요한 경우에 사용한다.

# MinMax 데이터 정규화
scaler = MinMaxScaler()
s_data = scaler.fit_transform(raw)

print('\nMinMax 정규화 형식:', type(s_data)) #data는 numpy로 전환된다.

# 정규화 데이터 출력
df = pd.DataFrame(s_data)

print('\n정규화 데이터 샘플 13개')
print(df.head(13))

print('\n정규화 데이터 통계')
print(df.describe())

# 13개 묶음으로 데이터 분할
# 결과는 python 리스트
bundle = []
for i in range(len(s_data) - MY_PAST):
    bundle.append(s_data[i: i+MY_PAST+1]) # i ~ MY_PAST 슬라이싱


# 데이터 분할 결과 확인
print('\n총 13개 묶음의 수:', len(bundle))
print(bundle[0])
print(bundle[1])

# numpy로 전환
print('분할 데이터의 타입:', type(bundle))
bundle = np.array(bundle)
print('분할 데이터의 모양:', bundle.shape)

# 데이터를 입력과 출력으로 분할
x_data = bundle[:, 0:MY_PAST]
y_data = bundle[:, -1]

# 데이터를 학습용과 평가용으로 분할
split = int(len(bundle) * MY_SPLIT)
x_train = x_data[: split]
x_test = x_data[split:]

y_train = y_data[: split]
y_test = y_data[split:]

# 최종 데이터 모양
print('\n학습용 입력 데이터 모양:', x_train.shape)
print('학습용 출력 데이터 모양:', y_train.shape)

print('평가용 입력 데이터 모양:', x_test.shape)
print('평가용 출력 데이터 모양:', y_test.shape)

########## 인공 신경망 구현 ##########

# RNN 구현
# 케라스 RNN은 2차원 입력만 허용

model = Sequential() # 순차적으로 데이터를 불러온다.
model.add(InputLayer(input_shape=MY_SHAPE)) # 입력층을 지정한다. MY_SHAPE 2차원 데이터
# model.add(Embedding(input_dim=MY_PAST, output_dim=1))
# LSTM 오류가 안잡힌다. 나중에 계속 해야된다.
model.add(LSTM(MY_UNIT)) # LSTM을 모델에 추가 , MY_UNIT 하이퍼 파라미터 사용, LSTM의 차원
model.add(Dense(1, activation='sigmoid'))

print('\nRNN 요약')
model.summary()

########## 인공 신경망 학습 ##########


# 최적화 함수와 손실 함수 지정
model.compile(optimizer='rmsprop',
              loss='mse')

begin = time()
print('\nRNN 학습 시작')

model.fit(X_train,
          Y_train,
          epochs=MY_EPOCH,
          batch_size=MY_BATCH,
          verbose=0)

end = time()
print('총 학습 시간: {:.1f}초'.format(end - begin))


########## 인공 신경망 평가 ##########


# RNN 평가
loss = model.evaluate(x_test,
                      y_test,
                      verbose=0)

print('최종 MSE 손실값: {:.3f}'.format(loss))


# RNN 추측
pred = model.predict(x_test)
pred = scaler.inverse_transform(pred)
pred = pred.flatten().astype(int)
print('\n추측 결과 원본:', pred)


# 정답 역전환
truth = scaler.inverse_transform(y_test)
truth = truth.flatten().astype(int)
print('\n정답 원본:', truth)


# line plot 구성
axes = plt.gca()
axes.set_ylim([0, 650])

sns.lineplot(data=pred, label='pred', color='blue')
sns.lineplot(data=truth, label='truth', color='red')

plt.show()

# 예제 동작에 실패함!