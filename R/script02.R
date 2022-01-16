# 1. 산술연산과 변수의 영도 #

3+4
(3+5)*6
2^6

5+8

#3^3

min(6,9,3)  #최소값 함수
sqrt(100)   #제곱근
max(5,3,2)  #최대값 함수

a <- 3
b <- 5
c <- b - a
d <- 3.5
print(c)
print(d - c)

a<- 50
a
print(a)

a<- 5
a<- 6
a * b
b <- "A"
a * b 

# 2. 벡터와 리스트 (배열)

a <- c(1,2,3) # 숫자형 (Combine의 약자)
b <- c('k','o','r') #문자형
c <- c(TRUE, FALSE, TRUE, FALSE) #Bool
a
b
c

k <- c("k", "r", "t", 10, 20, 30) #문자와 숫자 모두 저장 가능

var1 <- 100:150 # 100 ~ 150
var1
var2 <- c(10, 20, 30, 100:150) # 10 ,20 , 30 뒤에 100~150까지 저장
var2
var3 <-seq(1, 201,2) # 1부터 201까지 2씩 증가
var3
var4 <- seq(0.3, 5.0, 0.1) # 0.3 ~ 5.0 : 0.1 increase
var4

score <- c(95, 80, 85)
score
names(score) # score에 저장 이름 (NULL)
names(score) <- c("kor", "tec", "ana")
names(score) #score에 저장 이름
score        #이름 값 출력

a<- c(5, 10, 7, 9 ,10, 15)
a[1]
a[2]
a[3]
a[4]
a[5]
a[6]
a[7]

k <- c(10, 30, 20, 70, 80)
k[c(2,4,6)]       # 2,4,6번째 값 출력
k[3:5]            # 3~5 데이터 값 출력
k[seq(3,7,2)]     # 3번쨰부터 홀수번째 데이터 값 출력 (2씩 증가)
k[-3]             # 3번째 값을 제외하고 출력
k[-c(2:4)]        # 2~4번째 값을 제외하고 출력

GDP <-c(2285,1770,2000)
GDP
names(GDP) <- c("KOR", "CHA", "AME")
GDP
GDP[2]
GDP["KOR"]
GDP[c("KOR", "CHA")]


kor <- c(80, 75, 60, 64, 90)
my.info <- list(name = 'korea', age = 70, status=TRUE, score=kor)
my.info  #리스트 내용 모두 출력
my.info[[4]] #리스트 내용의 4번째 값 출력
my.info$name #리스트 값 이름이 name인 값을 출력
my.info[[2]] #리스트 2번째 값 출력
my.info[-2[]] # 리스트 2번째 항목 제외하고 출력


# 3. 벡터와 벡터간의 연산 ##

k <- c(10, 40, 30, 70, 80)
3 * k
k - 3 
3 * k + 7

k <- c(10, 20, 30)
o <- c(40, 50, 60)
k * o #원소끼리 곱셈
k + o #원소끼리 덧셈
t <- k + o # k + o를 t에 저장장
t


kor <- c(10,20,30,40,50,60,70,80,90,100)
sum(kor) #합계
sum(2*kor) #2를 곱한 후 더함함
length(kor) #kor 갯수
mean(kor[2:5]) #2~5 값의 평균 
max(kor) #최대
min(kor) #최소
sort(kor) #오름차순 정렬
sort(kor, decreasing = FALSE) #오름차순
sort(kor, decreasing = TRUE) #내림차순
kor <- c(1,2,3,4,5,6,7,8,9,10)
kor>=6
kor[kor>6] #6보다 큰 데이터
sum(kor>6) # 6보다 큰 데이터 개수
sum(kor[kor>6]) #6보다 큰 데이터 합계
kor == 6
korea <- kor > 6 & kor < 9 #조건에 적합한 변수 데이터를 저장
kor[korea]  # 조건에 저장한 데이터 춫력

