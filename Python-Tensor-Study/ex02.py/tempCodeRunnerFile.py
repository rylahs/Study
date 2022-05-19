cost=tf.reduce_mean(tf.square(H-Y))
# a=tf.Variable(0.01)
# optimizer=tf.train.GradientDescentOptimizer(a)
# train=optimizer.minimize(cost)
# init=tf.global_variables_initializer()
# sess=tf.Session()
# for i in range(5001):
#   sess.run(train,feed_dict={X:xdata,Y:ydata})
#   if i % 500==0:
#     print(i,sess.run(cost,feed_dict={X:xdata,Y:ydata}),sess.run(W),sess.run(b))
# print(sess.run(H,feed_dict={X:[8]})) 