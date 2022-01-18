## 1. 데이터 셋에 사용자 정의 함수 적용하기 ##


res <- function(a,b) {
  res.max <- a
  if (b > a) {
    res.max <- a + b
  }
  return(res.max) 
} 

res(20,35)
x <- res(20,15)
y <- res(22,55)
print((x+y)/2)

Divide <- function(a,b=5) {
  result <- a%/%b
  return(result)
}

Divide(a=30,b=5)                # 매개변수명과 매개변수 데이터의 묶음으로 입력
Divide(50,10)                   # 매개변수 데이터만 입력
Divide(100)                     # a에 대한 데이터 값만 입력(b 데이터이 생략된 형태)


Equation <- function(a, b) {
  val.div <- a/b
  val.rmd <- a%%b 
  return(list(div=val.div, rmd=val.rmd)) 
}

result <- Equation(30,10)
d <- result$div         # 30, 10의 나누기
r <- result$rmd         # 30, 10의 나누기 나머지 값
cat('30/10=', d, '\n')
cat('30%%10=', r, '\n')

source("data/Mean.R")        # Mean.R 안에 있는 함수 실행

# 함수 사용
a <- mymean(30,5)      # mymean 함수 호출
b <- mymean(20,5)      # mymean 함수 호출
a-b
mean(mymean(50,2),5)  # 평균함수에 mymean 함수 호출

install.packages("readxl")
library(readxl)

library(dplyr)

subway <- read_excel("data/subway.xlsx")  # 엑셀 파일을 불러와서 subway에 할당
subway

result1 <- subway[subway$역명=="팔당", ]
result2 <- summary(result1)
print(result2)

filter(subway, 노선명=='중앙선')

slice(subway, 10:15)

apply(subway[,4:5], 1, mean)  # row 방향 단위로 평균 함수 적용
apply(subway[,4:5], 2, mean)  # col 방향 단위로 평균 함수 적용


##  2. 사용자 조건에 적합한 데이터 검색 찾기   ##


which(subway$승차총승객수>=50000)    # 승차총승객수가 50000이상 몇 번째 있는 위치
which(subway$하차총승객수<=50)       # 하차총승객수가이 50이하인 몇 번째에 있는 위치
max(subway$승차총승객수)                  # 최고 승차총승객수
which.max(subway$승차총승객수)            # 최고 승차총승객 위치
min(subway$승차총승객수)                  # 최저 승차총승객수
which.min(subway$승차총승객수)            # 최저 승차총승객 위치

eng <- c(78, 100, 78, 59, 90, 65, 85, 78, 89, 88)
중간 <- which(eng<=70)           # 영어성적이 70 이하인 값들의 인덱스
eng[중간] <- 75                  # 영어성적이 70 이하인 값들은 75점으로 중간 상향 조정
eng                             # 상향 조정된 중간 점수 확인

기말 <- which(eng>=85)           # 영어가 85 이상인 값들의 인덱스
eng.high <- eng[기말]            # 영어가 85 이상인 점수 값들만 추출하여 저장
eng.high                         # eng.high의 내용 확인

sub <- which(subway$하차총승객수<50) # 하차총승객수가 50 보다 작은 값들의 인덱스
sub
subway.sma <- subway[sub,]             # 추출한 인덱스에 적합한 데이터 값만 추출하여 저장
subway.sma

# 5열의 값 중 1000보다 큰 데이터 값의 행과 열의 인덱스 위치
sub3 <- which(subway[,5]>1000, arr.ind =TRUE)
sub3

# 노선 == "중앙선" 조건에 만족하는 데이터만 추출함 
subset(subway, 노선명=="중앙선")


