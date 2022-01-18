## 1단원 범주형 자료의 특성 ##

color <- c('red', 'blue', 'green', 'yellow', 'green',
           'green', 'red', 'green', 'blue', 'blue')
color                                # color의 내용 출력
table(color)                         # 도수분포표 갯수 계산
table(color)/length(color)           # 요소 비율 출력


co <- table(color)
co                
pie(co, main='color  Kinds')

color_f <- c(3, 1, 2, 1, 2, 4, 3, 1, 4, 2, 1, 2, 2, 3, 1)
co1 <- table(color_f)
co1

barplot(co1, main='Favorite color')
colors <- c('green', 'red', 'blue', 'yellow')
names(co1) <- colors                             # 1,2,3,4를 green, red, blue, yellow로 변경
co1
barplot(co1, main='barcolor', col=colors)        # 색 적용 막대그래프
pie(co1, main='piecolor', col=colors)            # 색 적용 원 그래프

## 2. 연속형 단일변수 탐색  ##

p_weight <- c(59, 62, 65, 75, 82)
p_weight.hy <- c(p_weight, 110)
p_weight
p_weight.hy

mean(p_weight)                # 데이터 평균
mean(p_weight.hy)            # 데이터 평균

median(p_weight)              # 데이터중앙값
median(p_weight.hy)          # 데이터중앙값

mean(p_weight, trim=0.15)     # 데이터 절사평균(상하위 15% 제외)
mean(p_weight.hy,trim=0.15)   # 데이터 절사평균(상하위 15% 제외)

t_data <- c(59, 62, 65, 75, 82, 110)
quantile(t_data)
quantile(t_data, (0:10)/10) 		# 10% 별로 구간 계산
summary(t_data)

t_data <- c(59, 62, 65, 75, 82, 110)
var(t_data)           # 데이터 분산
sd(t_data)            # 데이터 표준편차
range(t_data)         # 데이터 값의 범위
diff(range(t_data))   # 데이터 최댓값, 최솟값의 차이

c_dist <- cars[,2]                      # 자동차 구간 제동거리
hist(c_dist,                            # 분석자료(data)
     main="제동거리의 빈도",            # 제목
     xlab ="자동차구간제동거리",         # x축 위치 레이블
     ylab="빈도",                      # y축 위치 레이블
     border="green",                   # 막대 바깥 테두리색
     col="blue",                       # 막대 채우기색
     las=3,                             # x축 글씨 방향(0~3) 표시
     breaks=3)                          # 표현 막대 개수 선택

c_dist <- cars[,2]                  # 자동차 구간 제동거리(단위: 피트)
boxplot(c_dist, main="자동차 구간 제동거리")

boxplot.stats(c_dist)


