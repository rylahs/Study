#  1. 기본적인 데이터 셋인 Vector, 배열 특징 이해하기 #
#  01. 데이터 관리

a = 10                          # x에 10을 데이터 할당 
b = 20                          # y에 20를 데이터 할당 
c = a + b
c
a + b = c
c <- a + b
c
a + b -> c

a = 10
b = 20
temp = a
a = b
b = temp
a
b

a = 3
b = 2
a/b
ai = 3 + 2i
bi = 3 - 2i
ai+bi
kor = "Hello, korea"

bl.type = factor(c('A', 'B', 'C', 'D', 'F'))
bl.type
T
F

1:10 		                          # 1부터 10까지 1씩 증가, 10개인 벡터 생성
10:1 		                          # 10부터 1까지 1씩 감소, 10개인 벡터 생성 

vector(length = 10)

c(1:10)	 	                        # 1~10 요소 벡터 생성. 1:10과 동일
c(10, 20, 30, c(40:60)) 	        # 10~30 요소와 40~60 요소 결합, 10~60 요소 벡터 생성
a = c(10, 20, 30) 	              # 1~3 요소 벡터를 a에 저장
a 		                            # a 출력
b = c() 		                      # b를 빈 벡터로 생성
b = c(a, c(40:60)) 	              # 기존 b 벡터에 c(10:30) 벡터 추가 생성
b		                              # b 출력

seq(from = 10, to = 30, by = 2) 	# 10 ~ 30까지 2씩 증가 벡터 생성

seq(10, 30, by = 2) 			        # 10 ~ 30까지 2씩 증가 벡터 생성 

seq(0, 2, by = 0.1) 			        # 0 ~ 2까지 0.1씩 증가 요소 벡터 생성

seq(0, 2, length.out = 10) 		    # 0 ~ 2까지 요소 10개 벡터 생성 


rep(c(10:30), times = 3)		      # (10, 20, 30) 벡터를 3번 반복하여 생성
rep(c(10:30), each = 3) 		      # (10, 20, 30) 벡터의 개별 요소를 3번 반복한 생성


a = c(1, 3, 5, 7, 9)
length(a) 		                    # a 벡터 길이

a[1] 			                        # a 벡터의 1번 요소 데이터

a[1, 2, 3] 		                    # a 벡터의 1, 2, 3번 요소 입력 오류

a[c(1, 2, 3)] 		                # a 벡터의 1, 2, 3번 요소 벡터로 그룹화

a[-c(1, 2, 3)] 		                #  a 벡터의 1, 2, 3번 요소에서 제외

a[c(1:3)] 		                    # a 벡터에서 1~3번 요소 출력

a = c(1, 2, 3, 4)
b = c(5, 6, 7, 8)
c = c(3, 4)
d = c(5, 6, 7)

a+3 		                          # a 벡터 개별 요소에 3 더함

a + b 		                        # a 벡터와 b 벡터의 각 요소별 더함

a + c 		                        # a 벡터와 c 벡터의 요소 더함

a + f 		                        # a 벡터와 f 벡터의 요소 더함

a = 11:20

a > 7 		                        # a 벡터의 요소 값이 7보다 큰 여부 확인

all(a > 7) 		                      # a 벡터 요소 값이 모두 7보다 큰 여부 확인

any(a > 7) 		                      # a 벡터 요소 데이터 중 일부가 7보다 큰 여부 확인

a = 11:20
head(a) 		                      # 앞 데이터 6개 요소 추출

tail(a) 		                      # 뒷 데이터 6개 요소 추출

head(a, 7) 	                      # 앞 데이터 7개 요소 추출

tail(a, 7) 	                      # 뒷 데이터 7개 요소 추출

a = c(10, 20, 30)
b = c(30, 40, 50)
c = c(20, 10, 30)

union(a, b) 	                    # 데이터 합집합

intersect(a, b) 	                # 데이터 교집합

setdiff(a, b) 	                  # 데이터 차집합(a에서 b와 동일한 요소 제외)

setdiff(a, c) 	                  # 데이터 차집합(a에서 c와 동일한 요소 제외)

setequal(a, b) 	                  # a와 b에 동일한 요소 데이터가 있는지 비교

setequal(a, c) 	                  # a와 z에 동일한 요소 데이터가 있는지 비교


a = array(10:50, c(3, 4))         # 10~50 데이터를 3X4 행렬 할당

a

a[2, ]                            # 2행 요소 데이터 출력

a[, 3]                            # 2열 요소 데이터  출력

                                  # 2차원 배열 
a = 11:20
a

matrix(a, nrow = 5)

matrix(a, nrow = 5, byrow = T)


# 2. 데이터 테이블 구조인 DataFrame 파악하기 #


name = c("TOM", "SMITH", "YOUNG")

age = c(32, 27, 25)

gen = factor(c("F", "F", "M"))

blo.type = factor(c("A", "O", "AB"))

pati = data.frame(name, age, gen, blo.type)
pati


pati$name                         # name 속성 데이터 표시

pati[2, ]                         # 2행 출력

pati[, 3]                         # 3열 출력

pati[3, 2]                        # 3행 2열 출력

pati[pati$name=="YOUNG", ]        # YOUNG 정보 추출

pati[pati$name=="YOUNG", c("name", "age")] # YOUNG 이름과 나이 추출

head(cars)                        # cars 데이터 셋의 앞 6개 데이터 추출

speed

attach(cars)                      # attach 함수를 통해 cars 속성을 개별 변수로 활용

speed                             # speed 변수명을 입력

detach(cars)                      # detach 함수를 통해 cars 개별 속성 변수 사용 해제

speed                             # speed 변수 접근 실행

max(cars$speed)

min(cars$dist)

mean(cars$speed)

# with 함수 활용
with(cars, mean(speed))

with(cars, max(dist))

tail(airquality)                    # airquality 데이터에는  NA 포함

tail(na.omit(airquality))           # NA 데이터 제외 추출


# 3. 리스트 접근과 유용한 함수 적용하기 #


k1 <- data.frame(v1 = c(10,20,30),
                 v2 = c("a","b","c"))
k1
class(k1)

k2 <- matrix(c(10:21), ncol = 2)     # 행과 열의 2차원 데이터 구조
k2

class(k2)

k3 <- array(11:30, dim = c(3, 5, 2))  # 2차원 이상의 매트릭스
k3

class(k3)

k4 <- list(a1 = b,                    # 벡터 구조
           a2 = k1,                   # 데이터 프레임 구조
           a3 = k2,                   # 매트릭스 구조
           a4 = k3)                   # 어레이 구조
k4                                    # 모든 데이터 구조를 포함하는 데이터 구조

pati = data.frame(name, age, gen, blo.type)
pati

no.pati = data.frame(day = c(2:6), no = c(40, 50, 65, 62, 75))
no.pati

# 단순 데이터 추가
listPati = list(pati, no.pati) 

listPati


# 실무 데이터 불러오기

# readxl 패키지 설치
install.packages("readxl")

# readxl 패키지 로드
library(readxl)

pop <- read.csv("data/pop2015.csv")
pop

write.csv(pop, file = "data/pop.csv")

save(pop, file = "data/pop.rda")

rm(pop)
pop

load("data/pop.rda")

