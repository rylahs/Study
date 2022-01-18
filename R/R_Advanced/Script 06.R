# 02 실무 데이터로 단순 회귀 분석 적용하기 #

x = c(3.3, 6.3, 9.3, 12.3)		# 설명 변수(독립 변수)  데이터 x
y = c(3.3, 4.3, 5.8, 6.8)	# 반응 변수(종속 변수) 데이터 y
w = lm(y ~ x)		# x는 설명 변수, y 는 반응 변수, 단순 선형 회귀 모델 적합(학습 수행)
w		# 학습된 w 출력, Intercept 두 개의 계수 생성, w에 적합한 직선의 y 절편과 x의 계수를 의미, 함수의 최적해 값을 찾음, 최적 모델을 통해 모델 구축

plot(x, y)
abline(w, col = 'blue') # plot 그래프 위에 모델 w 덮어쓰기

coef(w)       # 매개 변수(계수) 데이터를 보여줌
fitted(w)     # 훈련 집합에 있는 샘플 데이터에 예측값 적용 결과값
residuals(w)  # 함수를 적용한 잔차를 보여줌
deviance(w)   # 함수를 적용한 잔차제곱합를 보여줌, 자료의 퍼진 정도, 변동 산포도, 자료가 클수록 변동이 계속 증가
deviance(w)/length(x) # 잔차제곱합을 훈련 집합에 있는 샘플 데이터의 개수로 나누고, 평균 제곱 오차와 동일함

summary(w)	# 모델의 다양한 통계적 특성(residuals: 잔차, Estimate : 모델의 계수)
# p-값의 유의 수준 평가, 0.05 기준에 따라 귀무가설 기각 여부 결정

xnew = data.frame(x = c(1.8, 2.3, 30.69))	 # 3개의 새로운 데이터 값
predict(w, newdata = xnew)	            	 #  새 샘플에 예측 결과 확인

xn=c(1.8,2.3,30.65)
yn=c(2.63,2.84,14.15)
plot(xn,yn,col='red', cex=3, pch=20) # cex: 점의 크기, pch: 점의 모양
abline(w)

# 모델 적합을 수행하려면 변수 사이의 원인과 결과 관계 필요

str(cars)  # 자동차 속도에 따른 제동 거리
head(cars, 10)
car = lm(dist~speed, data = cars) # lm 함수로 단순 선형 회귀 분석 수행 최적 모델 실행 결과
plot(cars, col='red', cex=1,pch=20)
abline(car)

