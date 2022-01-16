## 1. 조건에 따른 실행문 ##

work.type <- 'K'

if (work.type == 'O'){
  win <- 500 #유형이 'O'일때 실행
}else {
  win <- 100 #유형이 O가 아닌 다른 데이터일 경우 실행
}
print(win)

work.type <- 'K'
win <- 500
if (work.type == 'O') {
  win <- 100 #유형이 'O'일 때 실행
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
if (k < 50) {
  print(k)
} else {
  print(k/100)
  print(k*100)
}

a <- 100
b <- 200
if (a > 50 & b > 50) { # and
  print(a * b)
}
if (a > 50 | b > 30) { # or
  print(a + b)
}

x <- 100
y <- 200

if (x > y) {
  z <- x
} else {
  z <- y
}
print(z)

x <- 100
y <- 200
z <- ifelse(x > y, x , y)
print(z)

work.type <- 'A'
if (work.type == 'B') {
  win <- 200
} else { #한줄 아래에 두면 에러가 든다.
  win <- 100
}

if (work.type == 'B') {
  win <- 200 
}
