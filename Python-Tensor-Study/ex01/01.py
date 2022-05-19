import os
import tensorflow as tf
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'

hello = tf.constant('Hello World')

tf.print(hello)

mnist = tf.keras.datasets.mnist

# 설치가 꼬였을 때 keras import
#from tensorflow.keras.models import Sequential
#from tensorflow.keras.layers import LSTM,Dropout,Dense

# MNIST 4분할 데이터 불러오기
(x_train, y_train), (x_test, y_test) = tf.keras.datasets.mnist.load_data()

print('학습용 입력 데이터 모양 : ', x_train.shape)
print('학습용 출력 데이터 모양 : ', y_train.shape)
print('평가용 입력 데이터 모양 : ', x_test.shape)
print('평가용 출력 데이터 모양 : ', y_test.shape)