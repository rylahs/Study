## 1. 데이터셋에 사용자 정의 함수 적용하기 ##

res <- function(a,b) {
  res.max <- a
  if (b > a) {
    res.max <- a + b
  }
  return (res.max)
}

res(20,35)
x <- res(20,15)
print(x)
y <- res(22,55)
print((x+y)/2)

Divide <- function(a, b=5) {
  result <- a%/%b
  return(result)
}

Divide(a=30,b=5) #매개변수명과 매개변수 데이터의 묶음으로 입력
Divide(50,10) #매개변수 데이터만 입력력
Divide(100) #a에 대한 데이터만 입력 b는 생략략


Equation <- function(a,b) {
  val.div <- a/b
  val.rmd <- a%%b
  return(list(div=val.div, rmd=val.rmd))
}

result <- Equation(30,10)
d <- result$div # 30, 10의 나누기
r <- result$rmd # 30, 10의 나누기 나머지 값
cat('30/10=', d, '\n')
cat('30%%10=', r, '\n')