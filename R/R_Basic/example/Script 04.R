## 1. 조건에 따른 실행문 ##

work.type <- 'K'

if(work.type == 'O') {
  win <- 500          # 유형이 'O'일 때 실행
} else {
  win <- 100          # 유형이 'O'가 아닌 다른 데이터인 경우 실행
}
print(win)


work.type <- 'K'

win <- 500
if(work.type == 'O') {
  win <- 100            # 유형이 'O'일 때 실행
}
print(win)

s <- 80

if (s > 90) {
  gr <- 'A' 
} else if (s >= 80) {
  gr <- 'B' 
} else if (s >= 70) {
  gr <- 'C' 
} else if (s >= 60) {
  gr <- 'D' 
} else {
  gr <- 'F' 
}
print(gr)


k <- 100
if(k<50) {
  print(k)
} else {
  print(k/100)
  print(k*100)
}

a <- 100
b <- 200
if(a>50 & b>50) {         # and 
  print (a*b)
}
if(a>50 | b>30) {        # or 
  print (a+b)
}

x <- 100
y <- 200

if  (x>y) {
  z <- x
} else {
  z <- y
}
print(z)

x <- 100
y <- 200

z <- ifelse(x>y, x, y)
print(z)

work.type <- 'A'
if (work.type == 'B') {
  win <- 200
} 
else { 	                # 에러 발생, 윗 줄로 옮겨야 한다.
  win <- 100
}

if (work.type == 'B') {
  win <- 200
} 

## 2. 동작 반복을 데이터 셋에 실행  ##


for(x in 1:3) {
  print('*')
}

for(x in 15:20) {
  print(x)
}

for(y in 1:9) {
  cat('3 *', y,'=', 3*y,'\n') 
}

for(x in 1:30) {
  if(x%%3==0) {     # 3의 배수인지 확인
    print(x)
  }
}

tot <- 0
for(x in 1:50) {
  tot <- tot + x    # tot 변수에 x 값을 누적하여 합계 계산
}
print(tot)

tot <- 0
x <- 1
while(x <=100) {
  tot <- tot + x      # tot에 x 값을 반복으로 누적 합계
  x <- x + 1          # x 값을 1씩 증가
}
print(tot)

tot <- 0
while(T) {
  tot <- tot + x      # tot에 x 값을 반복으로 누적 합계
}

tot <- 0
for(x in 1:5) {
  tot <- tot + x
  if (x>=3) break
}
tot

tot <- 0
for(x in 1:30) {
  if (x%%3==0) next
  tot <- tot + x
}
tot






