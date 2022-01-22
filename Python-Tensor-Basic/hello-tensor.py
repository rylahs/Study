import os
import tensorflow as tf
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'

msg = tf.constant('Hello, TensorFlow!')
tf.print(msg)
print('hello world')

mnist = tf.keras.datasets.mnist

# MNIST 4분할 데이터 불러오기
(x_train, y_train), (x_test, y_test) = tf.keras.datasets.mnist.load_data()

print('학습용 입력 데이터 모양 : ', x_train.shape)
print('학습용 출력 데이터 모양 : ', y_train.shape)
print('평가용 입력 데이터 모양 : ', x_test.shape)
print('평가용 출력 데이터 모양 : ', y_test.shape)


# 이미지 데이터 원본 출력
# matplotlib 라이브러리 사용
import matplotlib.pyplot as plt
plt.imshow(x_train[58888], cmap='gray') # 학습용 입력 이미지 58888 번째 손글씨 출력 imshow = imageshow , cmap = colormap
plt.show()

print('58888째 학습용 데이터 입력값:', x_train[58888])
print('58888째 학습용 데이터 출력값:', y_train[58888])

# 이미지 데이터 [0, 1] 스케일링
x_train = x_train / 255.0
x_test = x_test / 255.0

plt.imshow(x_train[58888], cmap='gray')
plt.show()
print('58888째 학습용 데이터 입력값:', x_train[0])

# 인공신경망 구현
model = tf.keras.models.Sequential()
layers = tf.keras.layers

model.add(layers.Flatten(input_shape=(28, 28)))
model.add(layers.Dense(128, activation='relu'))
model.add(layers.Dropout(0.2))
model.add(layers.Dense(10, activation='softmax'))


# 인공신경망 요약
model.summary()


# 인공신경망 학습 환경 설정
model.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])


# 인공신경망 학습
model.fit(x_train, y_train, epochs=5)


# 인공신경망 평가
model.evaluate(x_test, y_test)


# 인공신경망 예측
pick = x_test[9999].reshape(1, 28, 28)
pred = model.predict(pick)
answer = tf.argmax(pred, axis=1)

print('\n인공신경망 추측 결과 (원본):', pred)
print('인공신경망 추측 결과 (해석):', answer)
print('정답:', y_test[9999])

# P2
# 인공 신경망 입력 -> 출력을 순차적으로 하나하나 진행(왼쪽 -> 오른쪽)
model = tf.keras.models.Sequential()
# keras.layers 패키지 사용, 각종 층의 기능이 제공
layers = tf.keras.layers

# 입력된 손 글씨 이미지 하나에 있는 2차원 화소의 데이터를 1차원 벡터로 전환 Flatten
model.add(layers.Flatten(input_shape=(28, 28)))

# 2번째 은닉층 추가, Dense층(밀집 조밀) : 뉴런들을 다 연결해주는 역할 RELU
model.add(layers.Dense(128, activation="relu"))

model.add(layers.Dropout(0.2))
model.add(layers.Dense(10, activation='softmax'))

# 인공신경망 요약
model.summary()

# 인공 신경망 학습 환경 설정
model.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])

# 인공신경망 학습
model.fit(x_train, y_train, epochs=5, verbose=1)

# 인공신경망 평가
model.evaluate(x_test, y_test, verbose=1)

# 인공신경망 예측
pick = x_test[7777].reshape(1, 28, 28)
pred = model.predict(pick)
answer = tf.argmax(pred, axis=1)

print('\n인공신경망 추측 결과 (원본):', pred)
print('인공신경망 추측 결과 (해석):', answer)
print('정답:', y_test[7777])

