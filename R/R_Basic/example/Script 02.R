# 1. 산술연산과 변수의 용도 #

3+4
(3+5)*6
2^6 

5+8
# 3^3


min(6,9,3)     # 최소값 함수
sqrt(100)      # 제곱근
max(5,3,2)     # 최대값 함수


a <- 3
b <- 5           
c <- b-a
d <- 3.5
print(c) 


a <- 50 
a          
print(a)


a <- 5       # a에 숫자 데이터 할당
b <- 6
a*b           # a*b의 결과 출력
b <- "A"      # b에 문자 데이터 할당
a*b           # a*b의 연산 결과 출력. 문자로 인한 에러 발생


# 2. 벡터와 리스트 #

a <- c(1,2,3) 			# 숫자형
b <- c('k','o','r') # 문자형	
c <- c(TRUE, FALSE, FALSE, TRUE) 	# 논리형
a				
b
c

k <- c("k","r","t", 10,20,30)
k

var1 <- 100:150 
var1
var2 <- c(10,20,30, 100:150)  
var2

var3 <- seq(1,201,2)     
var3
var4 <- seq(0.3,5.0,0.1)   
var4

var5 <- rep(3,times=7)           # 3을 7번 반복
var5
var6 <- rep(5:10,times=2)        # 5에서 10까지 2번 반복
var6
var7 <- rep(c(3,5,7), times=5)   # 3, 5, 7을 5번 반복
var7

score <- c(95,80,85)                    #개별 성적
score
names(score)                          # score에 저장 이름
names(score) <- c("kor","tec","ana")  # 값 이름을 부여
names(score)                          # score에 저장 이름
score                              # 이름 값 출력

a <- c(5,10,7,9,10,15)
a[1]
a[2]
a[3]
a[4]
a[5]
a[6]
a[7]

k <- c(10,30,20,70,80)
k[c(2,4,6)]         # 2, 4, 6번째 값 출력
k[3:5]              # 3~5 데이터 값 출력
k[seq(3,7,2)]       # 3부터 홀수 번째 데이터 값 출력
k[-3]               # 3번째 값 제외하고 출력
k[-c(2:4)]          # 2~4번째 값은 제외하고 출력


GDP <- c(2285,1770,2000)            
GDP
names(GDP) <- c("KOR","CHA","AME") 
GDP
GDP[2]
GDP["KOR"]
GDP[c("KOR","CHA")]    


kor <- c(80, 75, 60, 64, 90)
my.info <- list(name='korea', age=70, status=TRUE, score=kor)
my.info                     # 리스트 내용을 모두 출력
my.info[[4]]                # 리스트의 4번째 값 출력
my.info$name                # 리스트 값 이름이 name인 값 출력
my.info[[2]]                # 리스트의 2번째 값을 출력

# 3. 벡터와 벡터 간의 연산  ##

k <- c(10,40,30,70,80)
3*k 
k-3
3*k+7 

k <- c(10,20,30)
o <- c(40,50,60)
k*o           # 원소끼리 곱셈 출력
k+o           # 원소끼리 덧셈 출력
t <- k + o    # k, o를 더하여 t에 저장
t


kor <- c(10,20,30,40,50,60,70,80,90,100)
sum(kor)                      # kor에 포함된 값들의 합
sum(2*kor)                    # kor에 포함된 값들에 2를 곱한 후 합한 값
length(kor)                   # kor에 포함된 값들의 개수
mean(kor[2:5])                # 2~5번째 값들의 평균
max(kor)                      # kor에 포함된 값들의 최댓값
min(kor)                      # kor에 포함된 값들의 최솟값
sort(kor)                     # 오름차순 정렬
sort(kor, decreasing = FALSE) # 오름차순 정렬
sort(kor, decreasing = TRUE)  # 내림차순 정렬

kor <- c(1,2,3,4,5,6,7,8,9,10)
kor>=6
kor[kor>6]                    # 6보다 큰 데이터
sum(kor>6)                    # 6보다 큰 데이터의 개수
sum(kor[kor>6])               # 6보다 큰 데이터의 합계
kor==6
korea <- kor > 6 & kor < 9    # 조건에 적합한 변수에 저장
kor[korea]                    # 조건에 적합한 데이터를 선택



