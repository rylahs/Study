import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'

import numpy as np
import matplotlib.pyplot as plt

from time import time

from keras.datasets import fashion_mnist
from keras.utils.np_utils import to_categorical
from sklearn.metrics import f1_score, confusion_matrix

from keras.models import Sequential
from keras.layers import Flatten
from keras.layers import Dense, InputLayer
from keras.layers import Conv2D, MaxPool2D

# 하이퍼 파라미터
# MY_EPOCH = 0
MY_EPOCH = 3
# MY_EPOCH = 20
MY_BATCH = 300

############ 데이터 준비 ############

# 데이터 파일 읽기
# 결과는 numpy의 n-차원 행렬 형식
(x_train, y_train), (x_test, y_test) = \
    fashion_mnist.load_data()

# x_train = x_train[:30000]
# y_train = y_train[:30000]

# 4분할 된 데이터 모양 출력
print('\n학습용 입력 데이터 모양:', x_train.shape)
print('학습용 출력 데이터 모양:', y_train.shape)
print('평가용 입력 데이터 모양:', x_test.shape)
print('평가용 출력 데이터 모양:', y_test.shape)

# 샘플 데이터 출력
print(x_train[0])
# plt.imshow(x_train[0], cmap='gray')
# plt.show()
print('샘플 데이터 라벨:', y_train[0])

# 정규화 - MinMax 정규화 이론 [0, 1] 스케일링
# - 모든 데이터 값을 [0,1] 범위로 전환
# - 경사하강법 실행 시간을 줄여줌


# 제로 원 스케일링 Xmax = 255 Xmin = 0
# 각 화소를 255로 나누는 효과
x_train = x_train / 255.0
x_test = x_test / 255.0

# 이미지 데이터에서 채널의 의미
# - 흑백 : 1
# - 칼라 : 3(RGB)

# Conv2D 입력 데이터 형식
# - 4차원 텐서 요구
# Channel-last 방식 : batch + (rows, cols, channels)

# Conv2D 출력 데이터 형식
# - 4차원 텐서 출력
# Channel-last 방식 : batch + (rows, cols, filters)

# 채널 정보 추가
# 케라스 CNN에서 4차원 정보를 필요로 한다.

train = x_train.shape[0]
x_train = x_train.reshape(train, 28, 28, 1)
test = x_test.shape[0]
x_test = x_test.reshape(test, 28, 28, 1)

# 원핫 인코딩 이론
# 범주형 데이터(Categorical Data) 대상
# - 데이터를 하나의 정수가 아닌 여러개의 2진수로 표현

# 정수 데이터는 의도치 않은 혼동을 초래
# - CNN 예측값 2.0을 어떻게 해석할 것인가

# One hot Encoding은 이런 문제를 해결
# - 출력 숫자는 하나가 아니고 넷

# 출력 데이터 (= 라벨 정보) One Hot Encoding
print('원 핫 인코딩 전 : ', y_train[0])
y_train = to_categorical(y_train, 10)

print('원 핫 인코딩 후 : ', y_train[0])
y_test = to_categorical(y_test, 10)

print('학습용 출력 데이터 모양:', y_train.shape)
print('평가용 출력 데이터 모양:', y_test.shape)

############ 인공 신경망 구현 ############

# CNN 구현 (순차적 방법)
model = Sequential()

# 입력층
model.add(InputLayer(input_shape=(28, 28, 1)))

# 첫 번째 합성곱 블럭
model.add(Conv2D(filters=32,
                 kernel_size=2,
                 padding='same',
                 activation='relu'))

# model.add(Conv2D(filters=32,
#                  kernel_size=5,
#                  padding='same',
#                  activation='relu'))

# model.add(Conv2D(filters=32,
#                  kernel_size=1,
#                  padding='same',
#                  activation='relu'))

# model.add(Conv2D(filters=8,
#                  kernel_size=2,
#                  padding='same',
#                  activation='relu'))

# model.add(Conv2D(filters=128,
#                  kernel_size=2,
#                  padding='same',
#                  activation='relu'))

# model.add(Conv2D(filters=32,
#                  kernel_size=2,
#                  padding='same',
#                  activation='sigmoid'))

# model.add(Conv2D(filters=32,
#                  kernel_size=2,
#                  padding='same',
#                  activation='tanh'))



model.add(MaxPool2D(pool_size=2))

# 두 번째 합성곱 블럭
model.add(Conv2D(filters=64,
                 kernel_size=2, # 합성 곱 필터의 크기
                 padding='same', # 14 * 14
                 activation='relu'))

# model.add(Conv2D(filters=64,
#                  kernel_size=5, # 합성 곱 필터의 크기
#                  padding='same', # 14 * 14
#                  activation='relu'))

# model.add(Conv2D(filters=64,
#                  kernel_size=1, # 합성 곱 필터의 크기
#                  padding='same', # 14 * 14
#                  activation='relu'))

# model.add(Conv2D(filters=16,
#                  kernel_size=2, # 합성 곱 필터의 크기
#                  padding='same', # 14 * 14
#                  activation='relu'))

# model.add(Conv2D(filters=256,
#                  kernel_size=2, # 합성 곱 필터의 크기
#                  padding='same', # 14 * 14
#                  activation='relu'))

# model.add(Conv2D(filters=64,
#                  kernel_size=2, # 합성 곱 필터의 크기
#                  padding='same', # 14 * 14
#                  activation='sigmoid'))

# model.add(Conv2D(filters=64,
#                  kernel_size=2, # 합성 곱 필터의 크기
#                  padding='same', # 14 * 14
#                  activation='tanh'))

model.add(MaxPool2D(pool_size=2))

# SoftMax 활성화 함수
# [0, 1] 정규화의 한 종류
# - 자연 지수, 함수 (e의 y승에 대입)
# - 출력 값들의 총 합은 항상 1: 확률과 동일
# - 분류 문제 해결에서 많이 사용

model.add(Flatten())

# 3136개의 은닉층이 늘어난다. 약 40만개의 시냅스가 사용
model.add(Dense(128,
                activation='relu'))

# model.add(Dense(128,
#                 activation='sigmoid'))

# model.add(Dense(128,
#                 activation='tanh'))


# 출력
model.add(Dense(10,
                activation='softmax'))

print('\nCNN 요약')
model.summary()


########## 인공 신경망 학습 #############

model.compile(optimizer='adam',
              loss='categorical_crossentropy',
              metrics=['acc'])

# model.compile(optimizer='sgd',
#               loss='categorical_crossentropy',
#               metrics=['acc'])

# model.compile(optimizer='RMSprop',
#               loss='categorical_crossentropy',
#               metrics=['acc'])

# model.compile(optimizer='adam',
#               loss='mse',
#               metrics=['acc'])

# model.compile(optimizer='adam',
#               loss='poisson',
#               metrics=['acc'])

begin = time()
print('\nCNN 학습 시작')
model.fit(x_train,
          y_train,
          epochs=MY_EPOCH,
          batch_size=MY_BATCH,
          verbose=1)
end = time()
print('총 학습시간: {:.1f}초'.format(end - begin))

########### 인공 신경망 평가 ###############

# CNN 평가
_, score = model.evaluate(x_test,
                          y_test,
                          verbose=0)

print('최종 정확도: {:.2f}%'.format(score * 100))

# CNN 추측
pred = model.predict(x_test)
pred = np.argmax(pred, axis=1)
truth = np.argmax(y_test, axis=1)

# 혼동 행렬
print('\n혼동 행렬')
print(confusion_matrix(truth, pred))

# F1 점수
f1 = f1_score(truth, pred, average='micro')
print('\nF1 점수: {:.3f}'.format(f1))