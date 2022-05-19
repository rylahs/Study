import tensorflow as tf
import tensorflow.compat.v1 as tf
tf.disable_v2_behavior()
xdata=[1,2,3,4,5,6,7]
ydata=[25000,55000,75000,110000,128000,155000,180000]
W=tf.Variable(tf.random.uniform([1],-100,100))
b=tf.Variable(tf.random.uniform([1],-100,100))
X=tf.placeholder(dtype=tf.float32)
Y=tf.placeholder(dtype=tf.float32)
H=W*X*b
cost=tf.reduce_mean(tf.square(H-Y))
a=tf.Variable(0.01)
optimizer=tf.train.GradientDescentOptimizer(a)
train=optimizer.minimize(cost)
init=tf.global_variables_initializer()
sess=tf.Session()
for i in range(5001):
  sess.run(train,feed_dict={X:xdata,Y:ydata})
  if i % 500==0:
    print(i,sess.run(cost,feed_dict={X:xdata,Y:ydata}),sess.run(W),sess.run(b))
print(sess.run(H,feed_dict={X:[8]})) 