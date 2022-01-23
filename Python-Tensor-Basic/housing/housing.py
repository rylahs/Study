# 파이썬 패키지 가져오기
import tensorflow as tf
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

from time import time
from keras.models import Sequential
from keras.layers import Dense
from keras.layers import Activation

from sklearn.preprocessing import StandardScaler
from sklearn.model_selection import train_test_split

# 하이퍼 파라미터
MY_EPOCH = 500
MY_BATCH = 64


########## 데이터 준비 ##########

# 데이터 파일 읽기
# 결과는 pandas의 데이터 프레임 형식
heading = ['CRIM', 'ZN', 'INDUS', 'CHAS', 'NOX', 'RM',
           'AGE', 'DIS', 'RAD', 'TAX', 'PTRATIO',
           'LSTAT', 'MEDV']

raw = pd.read_csv('housing.csv')

# 데이터 원본 출력
print('원본 데이터 샘플 10개')
print(raw.head(10))

print('원본 데이터 통계')
print(raw.describe())

# Z-점수 정규화
# 결과는 numpy의 n-차원 행렬 형식

scalar = StandardScaler()
z_data = scalar.fit_transform(raw)

# numpy 에서 pandas로 전환
# header 정보 복구 필요
z_data = pd.DataFrame(z_data, columns=heading)

# 정규화 된 데이터 출력
print('정규화 된 데이터 샘플 10개')
print(z_data.head(10))

print('정규화 된 데이터 통계')
print(z_data.describe())

# Boston 데이터 사분할
# 학습용 입력값 || 학습용 출력값
# -------------------------
# 평가용 입력값 || 평가용 출력값

# 데이터를 입력과 출력으로 분리
print('\n 분리 전 데이터 모양: ',z_data.shape)
x_data = z_data.drop('MEDV', axis=1)
y_data = z_data['MEDV']


# 데이터를 학습용과 평가용으로 분리
x_train, x_test, y_train, y_test = \
    train_test_split(x_data,
                     y_data,
                     test_size=0.3)

print('\n학습용 입력 데이터 모양:', x_train.shape)
print('학습용 출력 데이터 모양:', y_train.shape)
print('평가용 입력 데이터 모양:', x_test.shape)
print('평가용 출력 데이터 모양:', y_test.shape)

# 상자 그림 출력
sns.set(font_scale=2)
sns.boxplot(data=z_data, palette='dark')
plt.show()

########## 인공 신경망 구현 ##########

# 케라스 DNN 구현
model = Sequential()
input = x_train.shape[1]
model.add(Dense(200,
                input_dim=input,
                activation='relu'))
model.add(Dense(1000,
                activation='relu'))

model.add(Dense(1))

print('\nDNN 요약')
model.summary()

########## 인공 신경망 학습 ##########

# 최적화 함수와 손실 함수 지정
model.compile(optimizer='sgd',
              loss='mse')

print('\nDNN 학습 시작')
begin = time()

model.fit(x_train,
          y_train,
          epochs=MY_EPOCH,
          batch_size=MY_BATCH,
          verbose=0)
end = time()
print('총 학습시간 : {:.1f}초'.format(end - begin))


########## 인공 신경망 평가 및 활용 ##########


# 신경망 평가 및 손실값 계산
loss = model.evaluate(x_test,
                      y_test,
                      verbose=0)

print('\nDNN 평균 제곱 오차 (MSE): {:.2f}'.format(loss))


# 신경망 활용 및 산포도 출력
pred = model.predict(x_test)
sns.regplot(x=y_test, y=pred)

plt.xlabel("Actual Values")
plt.ylabel("Predicted Values")
plt.show()

