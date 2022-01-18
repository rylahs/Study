## 2. 동작 반복을 데이터셋에 실행 ##

for (x in 1:3) {
  print('*')
}
for (x in 15:20) {
  print(x)
}

for(y in 1:9) {
  cat('3 * ', y, '=', 3*y,'\n')
}

for (x in 1:30) {
  if (x%%3 ==0) { # 3의 배수인지 확인
    print(x)
  }
}

tot <- 0
for (x in 1:50) {
  tot <- tot + x #tot 변수에 x값을 누적하여 합계를 계산
}
print(tot)

tot <- 0
x <- 1
while(x <= 100) {
  tot <- tot + x #tot에 x 값을 반복적으로 누적 합계
  x <- x + 1 # x값을 1씩 증가
}
print(tot)

tot <- 0
while(T) {
  tot <- tot + x # tot에 x값을 반복으로 누적 합계
}

tot <- 0
for (x in 1:5) {
  tot <- tot + x
  if (x >= 3) break
}
tot

tot <- 0
for(x in 1:30) {
  if(x%%3 == 0) next
  tot <- tot + x
}
print(tot)

