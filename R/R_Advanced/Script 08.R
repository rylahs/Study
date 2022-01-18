# 01 일반화 선형 모델 #

Air = data.frame(온도 = c(38.5, 35.5, 36.7, 37.3, 33.9, 36.2, 35.7), 
                 판매량 = c(30, 25, 23, 21, 20, 15, 13))
plot(Air, pch = 20, cex = 2, xlim = c(30, 40))


Department = data.frame(discountr = c(3.0, 5.0, 7.0, 10.0, 11.0), 
                        profit = c(0, 0, 0, 1, 1))
plot(Department, pch = 19, cex = 3, xlim = c(3, 11))

w = lm(profit ~ discountr, data = Department)
# discountr는 설명 변수, profit 는 반응 변수, 단순 선형 회귀 모델 적합(학습 수행)
w		# 학습된 w 출력, Intercept 두 개의 계수 생성, w에 적합한 직선의 profit 절편과 discountr 계수를 의미, 함수의 최적해 값을 찾음, 최적 모델을 통해 모델 구축

coef(w)       # 매개 변수(계수) 데이터를 보여줌
fitted(w)     # 훈련 집합에 있는 샘플 데이터에 예측값 적용 결과값
residuals(w)  # 함수를 적용한 잔차를 보여줌
deviance(w)   # 함수를 적용한 잔차제곱합를 보여줌

plot(Department, pch = 19, cex = 1, xlim = c(3, 11))
abline(w)

newdata = data.frame(discountr = c(1, 7, 9, 21, 33))    # 5개의 새 할인율
q = predict(w, newdata)
print(q)

plot(Department, pch = 19, xlim = c(0, 25), ylim = c(-0.5, 3.5))
abline(w)

re = data.frame(discountr = newdata, profit = q)
points(re, pch = 19, cex = 1, col = 'red')
legend ("bottomright", legend = c("t_data", "ndata"), 
        pch = c(20, 20), cex = 2, col = c("black", "red"), bg = "gray")


# 단순 선형 모델 #
Department = data.frame(discountr = c(3.0, 5.0, 7.0, 10.0, 11.0), 
                        profit = c(0, 0, 0, 1, 1))
gg = glm(profit~discountr, data = Department, family = binomial)
# glm()는 일반화 선형 회귀 모형으로 정규 분포보다 종속 변수의 선형 모형으로 확장
# 로지스틱 회귀나 포아송 회귀에 적용, 'family = binomial'로 로지스틱 회귀 모형 사용

# glm의 최적 모델
coef(gg) # 매개 변수(계수) 데이터를 보여줌
fitted(gg) # 예측, 1~3은 0에 가깝고, 2개는 1에 가까움
residuals(gg) # 잔차, 5개가 모두 0에 가까움
deviance(gg) # 잔차제곱합 모두 0에 가까움

plot(Department, pch = 19, cex = 1)
abline(gg, col = 'red', lwd = 2)

newdata1 = data.frame(discountr = c(1, 5, 10, 25, 35, 40))   # 여섯 개의 새 할인율 적용
pp = predict(gg, newdata1, type='response') 
# type='responses' 는 반응 변수의 크기 값 반환, 로지스틱 회귀에서 확률 의미
print(pp)
# 실행 결과 순이익 0(5만원 미만), 1(5만원 이상)을 의미

plot(Department, pch = 19, cex = 1, xlim = c(0, 15))
abline(gg, col = 'red', lwd = 2)

res = data.frame(discountr = newdata1, profit = pp)
points(res, pch = 19, cex = 1, col = 'red')

legend ("left", legend = c("t_data", "n_data"), 
        pch = c(19, 19), 
        cex = 2, col = c("blue", "red"), bg = "gray")


# 유방암 수술 환자의 생존, 1958년~1970년에 병원에서 실행 연구 분석

survival <- read.csv("./data/survival.csv")
survival

names(survival) = c('no', 'year','age', 'n_count', 'sur')
str(survival)
# year: 수술한 연도, n_count: 양성 림프수, sur: 수술한 후 생존 연수(5년 이상: 1, 5년 미만 사망: 2)
survival$sur = factor(survival$sur) 
# 생존 연수(5년 이상: 1, 5년 미만 사망: 2)
str(survival)

s = glm(sur ~ year + age + n_count, data = survival, family = binomial)
# year + age + n_count는 설명 변수, sur 는 반응 변수, 'family = binomial'로 로지스틱 회귀 모형 
coef(s) # 매개 변수(계수) 데이터
deviance(s) # 잔차제곱합


# 새 환자 두 명 적용
new_patients = data.frame(year = c(58, 65), age = c(33, 41), n_count = c(21, 35)) 
predict(s, newdata = new_patients, type = 'response') # type='responses' 는 반응 변수의 크기 값 반환, 로지스틱 회귀에서 확률

ss = glm(sur ~ age + n_count, data = survival, family = binomial) # 'family = binomial'로 로지스틱 회귀 모형

coef(ss) # 매개 변수(계수) 데이터
deviance(ss) # 잔차제곱합

new_p = data.frame(age = c(34, 55), n_count = c(10, 22)) # 새로운 환자 두 명
predict(ss, newdata = new_p, type = 'response')
# type='responses' 는 반응 변수의 크기 값 반환, 로지스틱 회귀에서 확률

# 02 실무 데이터에 로지스틱 회귀 적용 : UCLA admission 데이터 #

binary <- read.csv("./data/binary.csv")
binary

str(binary)
# admit_p : 합격은 1, 불합격은 0
# gre_t : 수학능력시험 점수
# gpa_a : 학부 평균 성적
# u_rank : 출신 대학 순위 (1,2,3,4)4개로 구성

library(dplyr)
library(ggplot2)
binary %>% ggplot(aes(gre_t, admit_p)) + geom_point()   # 400개 샘플 데이터 
binary %>% ggplot(aes(gre_t, admit_p)) + geom_jitter(aes(col = admit_p)) 
# geom_jitter()는 geom_point에서 각 점의 위치를 영역에서 무작위 형태로 수평 분산

binary %>% ggplot(aes(gre_t, admit_p)) + 
                  geom_jitter(aes(col = factor(admit_p)))

binary %>% ggplot(aes(gre_t, admit_p)) + 
                  geom_jitter(aes(col = factor(admit_p)), 
                  height = 0.1, width = 0.1)   # height는 수직 방향의 잡음 정도, 0.1은 10%
plot(binary)
# gre_t가 높을수록 합격 가능성 상승, 800점에 가까운 학생점 admit_p 0인 경우 있음, 400 이하도 합격생이 있음
# u_rank와 admit_p 그래프는 u_rank는 1, 2, 3, 4의 4개 값만 가짐. 총 8개 점만 확인, 겹침 현상


install.packages('gridExtra')
library(gridExtra)

s1 = binary%>%ggplot(aes(gpa_a, admit_p)) +
  geom_jitter(aes(col = factor(admit_p)), height = 0.1, width = 0.0)
s2 = binary%>%ggplot(aes(u_rank, admit_p)) +
  geom_jitter(aes(col = factor(admit_p)), height = 0.1, width = 0.1)

grid.arrange(s1, s2, ncol = 2) # 한 행에 2개 그림

w = glm(admit_p ~., data = binary, family = binomial)
# # admit_p 는 반응 변수, 설명 변수 gre_t,  gpa_a, u_rank, 'family = binomial'로 로지스틱 회귀 모형
coef(w)  # 매개 변수 데이터
# admit_p = 0.00229396*gre_t+0.77701357*gpa_a+-0.56003139*u_rank 
# u_rank 값이 적을수록 좋은 대학으로 평가

deviance(w,type='response')  
# 잔차제곱합, type='responses'는 반응 변수의 크기 값 반환, 로지스틱 회귀에서 확률

summary(binary)

# 새 학생들의 합격 여부 예측
s = data.frame(gre_t = c(800), gpa_a = c(3.75), u_rank = c(2))
predict(w, newdata = s, type ='response')
# type='responses' 는 반응 변수의 크기 값 반환, 로지스틱 회귀에서 확률
# 합격할 확률이 54.4%
?colon

library(survival)
library(ggplot2)
library(dplyr)
str(colon)

plot(colon)

# extent:암세포가 분포된 깊이(1=submucosa, 2=muscle, 3=serosa, 4=contiguous structures)
# status:사망/재발 여부(0은 완치, 1은 재발이거나 사망)
# age: 환자의 연령
# surg:수술 후 등록까지 기간(0=short, 1=long)
# node4:양성 림프절 수가 4개 이상 여부(0은 4개 미만, 1은 4개 이상)

s1 = colon %>% ggplot(aes(extent, status)) + 
  geom_jitter(aes(col = factor(status)), height = 0.3, width = 0.3)
s2 = colon %>% ggplot(aes(age, status)) + 
  geom_jitter(aes(col = factor(status)), height = 0.3, width = 0.3)
s3 = colon %>% ggplot(aes(surg, status)) + 
  geom_jitter(aes(col = factor(status)), height = 0.3, width = 0.3)
s4 = colon %>% ggplot(aes(nodes, status)) + 
  geom_jitter(aes(col = factor(status)), height = 0.3, width = 0.3)

grid.arrange(s1, s2, s3, s4, ncol = 2, nrow = 2)
# extent--status, age--status, surg--status, nodes--status 변수의 상관 관계
# age가 클수록 status가 1인 샘플이 많음, 젊은 환자도 1인 경우가 있음

w = glm(status~., data = colon, family = binomial) # status를 반응 변수로 지정
w

deviance(w)

table(is.na(colon))

naomit_colon = na.omit(colon)
w = glm(status~., data = naomit_colon, family = binomial)
w

deviance(w) 
# 잔자제곱합, 자료의 퍼진 정도, 변동 산포도, 자료가 클수록 변동이 계속 증가

# study 변수는 NA이고, 데이터 값은 모두 1로 status에 영향을 미치지 못함, 분별력없는 변수 판단

naomit_colon = naomit_colon[c(TRUE, FALSE), ]	  # 홀수행 데이터만 적용
w = glm(status~rx + sex + age + obstruct + perfor + adhere + nodes + differ + extent + surg, data = naomit_colon, family = binomial)
deviance(w)

