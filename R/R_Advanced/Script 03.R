# 1단원 파일 읽어오기와 쓰기 #

stu1 = read.table("data/stu1.txt", header = T) 
stu1

# 읽어오기 할 파일의 구조 
str(stu1) 

# 첫 행은 자동적으로 header 옵션
stu1 = read.csv("data/stu1.csv") 
stu1

# 파일 원본 형태 읽어 오기
stu1 = read.table("data/stu1.txt", header = T, as.is = T) 

# 문자열에 큰따옴표가 구분하여 표시됨.
write.table(stu1, file = "data/grade1.txt") 

# 문자열에에 큰따옴표가 구분되지 않음.
write.table(stu1, file = "data/grade2.txt", quote = F)

write.csv(stu1, file = "data/grade.csv", quote = F)

# 02 데이터 정제와 조건문 #

score = c(45, 70, 90, 66, 35, NA, 100)	# 벡터 데이터인 경우
score[score<50]	# 데이터 값이 50 미만인 데이터 추출

score[score%%5!= 0]	# 데이터 값이 5으로 나누어 0인 데이터 추출

score[is.na(score)]	# NA인 데이터 추출

score[!is.na(score)]	# NA가 아닌 데이터 추출

score[score%%3==0&!is.na(score)]	# 3의 배수이고, NA가 아닌 데이터 추출

teacher = data.frame(name = c("홍길동", "이철수", "김영희"),
                     gender = factor(c("F", "M","F")), age = c(38, 46, 33))  

# 데이터 프레임 구성

teacher

teacher[teacher$gender =="M",]  # 성별이 남성인 행 추출

teacher[teacher$age<35&teacher$gender =="F",] # 35살 미만의 여성 행 추출

a = 10
if(a %% 2 !=0) {
  print('a는 홀수')	# 조건이 참일 때 실행
}   else {
  print('a는 짝수')	# 조건이 거짓일 때 실행
}

a = 3
if(a>0) {
  print('a는 양수 입니다.')	# a가 0보다 크면 양수 출력
} else if(a<0) {
  print('a는 음수 입니다.')	# a가 0보다 작으면 음수 출력
} else {
  print('a는 0 입니다.')		# 위 조건을 모두 만족하지 않으면 출력
}

a = c(-10:10)
options(digits = 2)		# 숫자 표현했을 때 유효 자릿수를 2자리로 설정
sqrt(a)

sqrt(ifelse(a>=0, a, NA))	# NaN이 발생 방지하고, 음수일 때 NA로 표시

stu1 = read.csv("data/stu1.csv")
stu1[, 2] = ifelse(stu1[, 2]>= 0 & stu1[, 2]<= 96, stu1[, 2], NA)
stu1[, 3] = ifelse(stu1[, 3]>= 0 & stu1[, 3]<= 96, stu1[, 3], NA)
stu1[, 4] = ifelse(stu1[, 4]>= 0 & stu1[, 4]<= 96, stu1[, 4], NA)
stu1 	

# 03 데이터 정제와 반복문 #

for(v in 1:20) {
  print(v)
} 

# for 실행문으로 구구단 2~9단 프로그램
for(x in 2:9) {
  for(y in 1:9) {
    print(paste(x, "X", y, "=", x*y))
  }
}

# while 실행문으로 1~15까지 숫자 증가
w = 1           # w의 시작 데이터 값은 1임.
while(w <= 15){ # w가 15 이하인 동안에 반복함
  print(w)
  w = w+1       # w를 1씩 증가
}

# while 실행문으로 구구단 2단 프로그램
o = 1
while(o<=9) {
  print(paste(2, "X", o, "=", 2*o))
  o = o+1
}

# repeat 실행문으로 1부터 15까지 숫자 증가 프로그램
v = 1	                # v 시작 데이터 값은 1
repeat {
  if(v>15) {          # v가 15을 초과하면 반복 중단(break)
    break
  } else {
    print(v)
    v = v+1           # v를 1씩 증가
  }
}

# 1부터 20까지의 수 중 3배수 출력하기
for(w in 1:20) {
  if(w%%3 == 0) {
    print(w)
  }
}

# 04 데이터 정제와 조건문과 반복문 #

# 1부터 20까지의 숫자 중 소수 출력하기
for(v in 1:20) {
  check = 0
  for(w in 1:v) {
    if(v%%w ==0) {
      check = check+1
    }
  }
  if(check ==2) { 
    print(v)
  }
}

stu1 = read.csv("data/stu1.csv")
stu1	    # 데이터에 95 초과 음수 값 포함


for(v in 2:4) {
  stu1[, v] = ifelse(stu1[, v]>= 0 & stu1[, v]<= 95, stu1[, v], NA)
}

stu1	

# 2단원 사용자 함수 수식 #

factorial = function(a) {   # 함수의 이름은 factorial 
  fac = 1                   # 계승 데이터를 저장할 변수
  while(a>1) {              # a가 1보다 크면 반복
    fac = fac*a             # a 데이터 값을 fac에 곱한 후 fac에 다시 반영
    a = a-1                 # a 값을 1 감소
  }  
  return(fac)   # 최종 계산 결과를 fac에 반환
}
factorial(7)	  # 7을 적용계산한 결과


# 3단원 01 데이터 정제 결측값 처리 #

# na.omit 함수로 결측값 계산하기
na_rm = na.omit(airquality)
mean(na_rm$Solar.R)
airquality

table(is.na(airquality))
table(is.na(na_rm))

table(is.na(airquality$Solar.R))
table(is.na(na_rm$Solar.R))
mean(na_rm$Solar.R)

table(is.na(airquality$Ozone))
table(is.na(na_rm$Ozone))
mean(na_rm$Ozone)

na_rm1 = airquality[!is.na(airquality$Solar.R) & !is.na(airquality$Ozone), ]
mean(na_rm1$Solar.R)

mean(airquality$Solar.R, na.rm = T)

# 02 데이터 정제 이상값 처리

# 성적 및 학점 데이터
score1 = data.frame(name = c("이연란", "김수현", "정우석", "이상민", "박희진"), score = c(92, 80, 75, 60, 77), gender=factor(c("F", "F", "M", "K", "M")), grade = factor(c("A", "B", "C", "C", "F")))
score1

# M, F 성별만 표시
score1_outrm = score1[score1$gender=="M"|score1$gender=="F", ]
score1_outrm	


# 성별과 등급에서 이상 데이터 값 제거
score1_outrm1 = score1[(score1$gender == "M"|score1$gender == "F") & (score1$grade == "A"|score1$grade == "B"|score1$grade == "C"|score1$grade == "D"), ]
score1_outrm1	 

# 이상값이 포함된 성적 데이터
score2_outrm2 = data.frame(name = c("이연란", "김수현", "정우석", "이상민", "박희진"), score = c(92, 80, 75, 60, 77), gender = c(1, 2, 1, 3, 2), grade = factor(c("A", "B", "C", "C", "F")))
score2_outrm2 

# 성적 이상값을 결측값으로 변경
score3_outrm3$score = ifelse((score3_outrm3$score<0|score3_outrm3$score>100), NA, score3_outrm3$score)
score3_outrm3


# 성별을 이상값에서 결측값으로 변경
score2_outrm2$gender = ifelse((score2_outrm2$gender<1|score2_outrm2$gender>2), NA, score2_outrm2$gender)
score2_outrm2 	

# 결측 데이터 행 값을 모두 제거
score3_outrm3[!is.na(score3_outrm3$gender)&!is.na(score3_outrm3$score), ] 


# 03 실무 데이터 분석
mpg1 <- as.data.frame(ggplot2::mpg)           

# drv가 4, f, r 유지와 그 외 NA할당
mpg1$drv <- ifelse(mpg1$drv %in% c("4", "f", "r"), mpg1$drv, NA)

# 이상치 여부 확인
table(mpg1$drv)

boxplot(mpg1$hwy)$stats

# 범위 유지 범위 영역 밖은 NA 할당
mpg1$cty <- ifelse(mpg1$hwy < 12 | mpg$hwy > 37, NA, mpg$hwy)

# 상자 그래프 그림 생성
boxplot(mpg1$hwy)

mpg1 %>%
  filter(!is.na(drv) & !is.na(hwy)) %>%  # 결측치 분리
  group_by(drv) %>%                      # drv별 그룹화
  summarise(mean_hwy = mean(hwy))        # hwy 평균 구하기



