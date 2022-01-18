# 1단원 데이터 테이블 매트릭스 #

x <- matrix(1:30, nrow=5, ncol=6)
x                                 # 매트릭스 데이터 출력

x2 <- matrix(1:30, nrow=5, ncol=6, byrow=T)
x2                               # 매트릭스 x2 데이터

a <- 1:5                          # a 벡터 만들기
b <- 6:10                         # b 벡터  만들기
c <- matrix(1:30, nrow=5, ncol=6) # c 매트릭스  만들기

x1 <- cbind(a,b)                  # a와 b를 열 단위 결합한 후 매트릭스 만들기
x1                                # x1 매트릭스  데이터
x2 <- rbind(a,b)                  # a와 b를 행단위 결합한 후 매트릭스 만들기
x2                                # x2 매트릭스데이터 
x3 <- cbind(c,a)                  # c 매트릭스와 a열 벡터 결합
x3                                # x3 매트릭스 데이터
x4 <- rbind(x2,a)                 # x2 매트릭스와 a행 벡터 결합
x4                                # x4 매트릭스 데이터 

a <- matrix(1:30, nrow=5, ncol=6) # a 매트릭스 만들기
a                                 # a 매트릭스 데이터
a[2,4]                            # 2행 4열 데이터 값
a[1,3]                            # 1행 3열 데이터 값
a[3,]                             # 3행에 모든 데이터 값
a[,4]                             # 4열에 모든 데이터 값

v <- matrix(1:30, nrow=5, ncol=6) # v 매트릭스 만들기
v                                 # v 매트릭스 데이터

v[2:3,]                           # 2, 3행에 있는 모든 데이터 값
v[,c(1,3)]                        # 1, 3열에 있는 모든 데이터 값

v[3,2:4]                          # 3행의 데이터 값 중 2~4열 데이터
v[3,c(2,4,6)]                     # 3행의 데이터 값 중 2, 4, 6열 데이터

grade <- matrix(c(95,87,79,85,
                  95,93,56,86,
                  92,85,77,65),
                nrow=4, ncol=3)
grade
rownames(grade) <- c('이연란','김수현','박희진','이상민')
colnames(grade) <- c('mat','eng','sci')
grade


grade['박희진','mat']             # 박희진의 수학 성적
grade['김수현',c('eng','sci')]    # 김수현의 영어, 과학 성적
grade['이상민',]                  # 이상민의 모든 과목 성적

grade[,'eng']                     # 모든 학생의 eng 성적

rownames(grade)                   # grade의 행

colnames(grade)                   # grade의 열의 이름

colnames(grade)[3]                # grade의 열 중에서 세 번째 데이터 값

# 2단원 데이터프레임 자료구조 #

area <- c("Seoul","Busan","Dae-gu")     # 문자 벡터
score <- c(3,1,2)                       # 숫자 벡터

area.info <- data.frame(area, score)    # 데이터프레임 만들기
area.info                               # area.info의 내용 출력

iris

iris[2:4,c("Sepal.Width","Petal.Width")]  # 2 ~ 4행, 2, 4열 데이터
iris[3:5,]                                # 3 ~ 5행 데이터
iris[2:4,c(3,3)]                          # 2 ~ 4행이고, 3, 3열 데이터
   
# 3단원 파일 형식 데이터 읽기와 쓰기 #

grade <- read.csv("data/grade.csv", header=T)      # .csv 파일 불러오기
head(grade)

my.grade <- subset(grade, name == '이연란')         # 'grade' 데이터
write.csv(my.grade, "data/grade_1.csv", row.names=F) # .csv 파일에 저장하기




