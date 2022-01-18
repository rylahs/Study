# 01 단순 선형 회귀의 적용 : cars #

car_b <- cars

c_model = lm(dist~speed, data = car_b) 
# dist는 반응 변수, speed는 설명 변수
# lm 함수로 단순 선형 회귀 분석, 최적 모델 구축

coef(c_model) 
# 매개 변수 계수 값 표시
plot(car_b)
abline(c_model, col = 'blue')

fitted(c_model)    
# 훈련 집합의 샘플 예측 데이터 결과, 오차 분석표의 예측값과 같음
residuals(c_model) # 잔차 계산식, 오차 분석표의 오차 행과 같음
# 샘플 데이터의 오차를 표시함

x1 = data.frame(speed = c(10)) 
predict(c_model, x1) 
# 예측 데이터 발생
# 10으로 달리다가 브레이크를 밟았을 때 21.74499에 멈춤
x2 = data.frame(speed = c(35.0, 35.5, 36.0, 36.5, 37.0, 37.5, 38.0))
# 시속을 0.5씩 증가하였을 때, 제동 거리를 예측
predict(c_model, x2)

x1 = data.frame(speed = c(35.0, 35.5, 36.0, 36.5, 37.0, 37.5, 38.0))
plot(x1$speed, predict(c_model, x1), col ='blue', cex = 2, pch = 10)
abline(c_model, col ='red')
# 예측 그래프로 확인

plot(car_b, xlab ='speed(속도)', ylab = 'dist(거리)')  # car_b 데이터 시각화

u = seq(0, 35, length.out = 20)            # length.out 수열의 길이 설정  
for(a in 1:5) {  
  w = lm(dist~poly(speed, a), data = car_b)  
  # ploy i차 고차방정식(5차 방정식) 적용
  assign(paste('w', a, sep = '.'), w)        
  # i차 모델의 w을 w.i라 칭함, assign(): 변수를 만드는 함수,a1, a2, a3, a4, a5 변수 생성
  lines(u, predict(w, data.frame(speed = u)), col = a) 
  # w 예측한 결과를 바탕으로 겹쳐 시각화 
}
w.1
# 분산 분석 통계량
# anova 함수는 모델이 한 개 주어질 때, t-검정과 동일하게 독립 변수와 종속 변수의 관련성에 대해 통계적 유의성으로 확인, 다수 개 모델의 차이를 통계적 유의성으로 확인

anova(w.1, w.2, w.3, w.4, w.5)                 
#Pr(>F), 즉 p값이 0.05보다 크므로 w.1 모델 사용 권장

# 모델의 통계량 분석 #

# women 데이터 분석

women_b <- women
str(women_b)
head(women_b, 10)

w_model = lm(weight ~ height, data = women_b) 
# height 설명 변수, weight 반응 변수로 단순 선형 회귀 분석
coef(w_model) # 매개 변수 계수 값 표시

plot(women_b)
abline(w_model, col = 'blue')

summary(w_model)
# height 계수의 p-값이 0.05보다 작아 매우 유의미한 모델링 결과

c_model = lm(dist~speed, data = car_b)
summary(c_model)
#speed 계수의 p-값이 0.05보다 매우 작음, 유의미한 통계 결과 확인

# 다중 선형 회귀 #
# 설명 변수가 2개 이상인 선형 회귀

install.packages('scatterplot3d')
library(scatterplot3d) 

x = c(3.3, 6.3, 3.3, 6.3)
z = c(10.3, 10.3, 20.3, 20.3)
y = c(4.68, 6.2, 7.0, 8.32)

scatterplot3d(x, z, y, xlim = 3:7, ylim = 5:30, zlim = 0:10, pch = 15, type = 'h')
# 3차원 산점도

w = lm(y ~ x + z) # x와 z는 설명 변수, y는 반응 변수의 다중 선형 회귀
coef(w) # 매개 변수 계수
#  lm 함수의 최적해 데이터 값 0.8814000   0.4733333   0.2220000 
v = scatterplot3d(x, z, y, xlim = 3:7, ylim = 5:30, zlim = 0:10, pch = 15, type = 'h')
v$plane3d(w) # 점선으로 그린 판모양의 형태로 그리기

fitted(w)    # 예측값
residuals(w) # 오차값
# 4.68로 예측은 4.73인데 오차는 -0.05

deviance(w)           # 잔차 제곱합 분석
deviance(w)/length(x) # 평균 제곱 오차 분석

x1 = c(7.3, 5.3)
z1 = c(15.3, 12.3)
n_data = data.frame(x = x1, z = z1)          
y1 = predict(w, n_data)
y1

v = scatterplot3d(trees$Girth, trees$Height, trees$Volume, pch = 15, type = 'h', angle = 75) # angel 옵션은 x축과 y축의 각도 
v$plane3d(w) # 점선으로 그린 판모양의 형태로 그리기


# 다중 선형 회귀의 적용 : trees#
# 벗나무 31개 각각 나무지름 :Girth, 나무 키 : Height, 목재의 부피: Volume
# 목재의 부피 또는 키가 클수록 측정 변수는 지름과 키,상대적으로 부피는 측정이 문제
# Girth와 Height 설명 변수, Volume 반응 변수 지정

trees_b <- trees

str(trees_b)
head(trees_b,10)
summary(trees_b)

scatterplot3d(trees_b$Girth, trees_b$Height, trees_b$Volume) # Girth와 Height 설명 변수, Volume 반응 변수를 3차원 산점도 표현

w = lm(Volume ~ Height + Girth , data = trees_b) # Girth와 Height 설명 변수, Volume 반응 변수 다중 선형 회귀
w
v = scatterplot3d( trees$Height,trees$Girth, trees$Volume, pch = 15, type = 'h', angle = 85) # angel 옵션은 x축과 y축의 각도 
v$plane3d(w) # 점선으로 그린 판모양의 형태로 그리기

new_data = data.frame(Girth = c(8.8, 13.3, 19.3), Height = c(75, 89, 88))
predict(w, newdata = new_data)

# 02 t-검정과 분산 분석하기 #

a = c(175, 168, 168, 190, 156, 181, 182, 175, 174, 179)
b = c(185, 169, 173, 173, 188, 186, 175, 174, 179, 180)

var.test(a,b) # 두 표본의 등분산성
# 0.05보다 크므로 등분산성 만족

# 독립표본 t-test (independent two sample t-test) 샘플

# var.test는 분산의 차이 유무, 0.05보다 크면 차이가 없음, 작으면 분산의 차이가 있음
# vs는 엔진이고 0은 v자형, 1은 직선형
var.test(mtcars[mtcars$vs==1,1 ], mtcars[mtcars$vs==0, 1]) # var.test는 두 표본의 등분산성 # 0.05보다 크므로 등분산성 만족

str(mtcars)
head(mtcars)

# t.test(그룹 1의 관측치, 그룹 2의 관측치, t-test 유형, 신뢰구간 범위)
t.test(mtcars[mtcars$vs==0,1 ], mtcars[mtcars$vs==1, 1],  paired = FALSE, var.equal = TRUE, conf.level = 0.95) # paired=FALSE는 독립표본 검정, paired=TRUE는 두 개 표본 검정 의미
# conf.level는 신뢰 수준 95%는 신뢰계수와 같은 의미, 신뢰 구간으로 조사 결과의 가능 횟수가 100번 중에서 95번


# 엔진의 그룹별 평균은 v자형은 16.61667, 직선형은 24.55714, p-value = 3.416e-05 차이가 유의미한 것으로 분석


# 독립표본 t-test의 경우 t-test 유형을 var.equal을 TRUE

# 대응표본 t-test  (Paired sample t-test) 샘플
m_test= c(18, 20, 25, 22, 23, 22, 25, 25, 29, 30)
f_test= c(17, 25, 28, 24, 28, 30, 26, 28, 29, 33)
t.test(m_test,f_test, paired=TRUE)
# p-value = 0.007061 두 표본의 차이가 유의미한 것으로 분석

# 세 종류의 데이터
# 진통제 효과로 유지 시간의 10이면 늘었음, -10이면 줄었음을 의미
d1 = c(33, -8, 58, -33, -23, 48)
d2 = c(15, 16, 15, 16, 15, 16)
d3 = c(33, -8, 58, -33, -23, 48, 33, -8, 58, -33, -23, 48)

# 평균과 표준편차
mean(d1)
sd(d1)
mean(d2)
sd(d2)
mean(d3)
sd(d3)

t.test(d1)
t.test(d2)
t.test(d3)

# p-value = 0.4651, p-value = 1.183e-08, p-value = 0.2658
# 두 번째가  p-value = 1.183e-08로 효과 있음
