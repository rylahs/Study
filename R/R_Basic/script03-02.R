#2단원 데이터프레임 자료구조 #

area <- c("Seoul", "Busan", "Dae-gu")  #문자 벡터
score <- c(3, 1, 2) # 숫자 벡터

area.info <- data.frame(area, score) #데이터 프레임 만들기
area.info

iris

iris[2:4, c("Sepal.Width", "Petal.Width")]  # 2 ~ 4행 , 2 ~ 4열 데이터
iris[3:5,]  # 3 ~ 5행 데이터
iris [2:4, c(3,3)] #2 ~4행이고 3, 3열 데이터
