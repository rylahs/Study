#1단원 데이터 테이블 매트릭스 #

#데이터 Matrix
# 1차원 데이터를 저장에 필요한 Vector 형식의 자료구조
# 2차원 형태로 구성된 자료구조가 대부분이고 바로 데이터셋 구조를 의미
# R에서는 2차원 형태의 데이터를 저장에 적합한 matrix와 data frame 장치를 활용
# 공통점은 matrix와 data frame은 모두 2차원 형태의 데이터를 저장 가능
# matrix는 저장된 모든 자료형 유형이 동일해야 한다.
# data frame은 숫자와 문자를 혼합해서 저장이 가능하다.

x <- matrix(1:30, nrow=5, ncol=6)
x #매트릭스 데이터 출력

x2<- matrix(1:30, nrow=5, ncol=6, byrow=T) #TRUE
x2

a <- 1:5 #a벡터 만들기
b <-6:10 #b벡터 만들기
c <-11:15 #c벡터 만들기
d <- 16:20 #d 벡터 만들기
e <- matrix(1:30, nrow=5, ncol =6) # e 매트릭스 만들기

x1 <-cbind(a,b) #a와 b를 열단위로 결합한 후 매트릭스 만들기
x1 #x1 매트릭스 데이터터
x2 <-rbind(a,b) #a와 b를 행단위로 결합한 후 매트릭스 만들기
x2
x3 <-cbind(e,a) #e매트릭스와 a열 벡터 결합
x3
x4 <- rbind(x2,a) #x2와 a행 벡터 결합
x4

a<- matrix(1:30, nrow=5, ncol=6) #a 매트릭스 만들기
a #a 매트릭스 데이터

a[2,4] #2행 4열 매트릭스 값
a[1,3] #1행 3열 데이터 값

a[3,] #3행의 모든 데이터 값
a[,4] # 열의 모든 데이터 값

v<- matrix(1:30, nrow=5,ncol=6)  # v 매트릭스 만들기
v

v[2:3,] #2행 3행에 있는 모든 데이터 값
v[,c(1,3)] #1, 3열에 있는 모든 데이터 값

v[3,2:4] #3행의 데이터 값중 2~4열 데이터
v[3,c(2,4,6)] #3행의 데이터 값 중 2,4,6열 데이터

grade <- matrix (c(95, 87, 79, 85,
                   95, 93, 56, 86,
                   92, 85, 77, 65),
                 nrow = 4, ncol =3)
grade
rownames(grade) <- c('이연란', '김수현', '박희진', '이상민')
colnames(grade) <- c('Math', 'English', 'Science')
grade

grade['박희진','Math'] #박희진의 수학 성적
grade['김수현',c('English','Science')] #김수현의 영어 과학 성적
grade ['이상민',] #이상민의 모든 성적

grade[,'English'] #모든 학생의 영어성적

rownames(grade) #grade의 행
colnames(grade) #grade의 열

colnames(grade)[3] #grade 열중 3번째 데이터 값
