# 3단원 파일 형식 데이터 읽기와 쓰기 #

grade <- read.csv("DATA/grade.csv", header=T) #.csv 파일 불러오기
head(grade)

my.grade <- subset(grade, name == '김수현') #'grade' 데이터
write.csv(my.grade,"DATA/grade_1.csv", row.names=F) #.csv 파일 저장하기
