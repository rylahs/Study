import os
import tensorflow as tf
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'

hello = tf.constant('Hello World')

tf.print(hello)