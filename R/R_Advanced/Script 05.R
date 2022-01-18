# 01 대용량 데이터를 직관적으로 시각화하기 #

# 1. 데이터 과학 시각적 구성 요소
library(gapminder)
library(dplyr)

gap_d <- gapminder

gap <- gap_d %>% group_by(year, country, continent) %>%
  summarize(g_pop = sum(pop)) 
head(gap, 10)

# 2. 대용량 데이터의 효과적인 관찰 #
plot(gap$year, gap$g_pop, col = gap$continent)
plot(gap$year, gap$g_pop, col = gap$continent, pch = c(1:5))


# 범례는 대륙 데이터 개수에 따라 지정
legend("topright", legend = levels((gap$continent)), pch = c(1:length(levels(gap$continent))), col = c(1:length(levels(gap$continent))))


plot(gap_d$lifeExp, gap_d$gdpPercap, col = gap_d$continent)


install.packages("ggplot2")
library(ggplot2)
ggplot(gap_d, aes(x =  lifeExp, y = gdpPercap , col = continent)) +
  geom_point() + scale_x_log10()

ggplot(gap_d, aes(x =  lifeExp, y = gdpPercap, col = continent, size = pop)) +
  geom_point() + scale_x_log10()

ggplot(gap_d, aes(x =  pop, y = gdpPercap, col = continent, size = lifeExp)) +
  geom_point(alpha = 0.3) + scale_x_log10()

ggplot(gap_d, aes(x =  pop, y = gdpPercap, col=continent, size=pop)) +
  geom_point(alpha=0.3) + scale_x_log10() + facet_wrap(~year)


# 3. 데이터의 다양한 관점 #
gap_d %>% filter(year == 1962 & continent =="Europe") %>%
  ggplot(aes(reorder(country, gdpPercap), gdpPercap)) +
  geom_bar(stat = "identity",fill = "white", colour = "black") + coord_flip()

gap_d %>% filter(year==1962 & continent== "Europe") %>%
  ggplot(aes(reorder(country, gdpPercap), gdpPercap)) +
  geom_bar(stat  = "identity") + scale_y_log10() + coord_flip() + ggtitle ( "국가별통계")

gap_d %>% filter(country == "Belgium") %>%
  ggplot(aes(year, gdpPercap, col = country)) +
  geom_point() + geom_line() + ggtitle ( "연도별 시각화")

gap_d %>% ggplot(aes(x = year, y = lifeExp, col = continent)) +
  geom_point(alpha = 0.1) + geom_smooth(method="loess", size=3)

gg = filter(gap_d, year == 1962)
hist(x$lifeExp, main = "1962년 기준 수명")

gg %>% filter(year==1962) %>% ggplot(aes(continent, lifeExp)) + geom_boxplot()

plot(log10(gap_d$gdpPercap), gap_d$lifeExp, type = "S")


# 02. 시각화에 특화된 ggplot2 라이브러리 활용하기 #

#  1. 데이터 시각화 함수 #
car <- cars
head(car)

# type = "p"점, main = "car_brand"는 그래프의 제목
plot(car, type  = "o", main  = "car_brand")

plot(car, type = "h", main = "car_brand")       # type ="h"은 히스토그램 막대 플롯
plot(car, type="b", main="car_brand")   # type ="b"는 점과 선 플롯
plot(car, type = "s", main = "car_brand")  # type ="s"는 계단모양으로 (stair steps) 그래프

g = gap_d %>% filter(year == 1972 & continent == "Europe") %>%
  mutate(gpc = gdpPercap*pop) %>% select(country, gpc) %>%
  arrange(desc(gpc)) %>% head()

pie(g$gpc, g$country)
barplot(g$gpc, names.arg = g$country)

flower <- iris
matplot(flower[, 1:5], type = "s")
legend("topright", names(flower)[1:5], lty = c(1, 2, 3, 4, 5), col = c(1, 2, 3, 4, 5))


hist(car$dist)

# 2. 시각화 ggplot2 라이브러리 #
ggplot(gap_d, aes(x = pop, y = lifeExp, col = continent)) + geom_point(alpha = 0.5)


gap_d %>% filter(year == 2002) %>%
  ggplot(aes(gdpPercap, col = continent)) + geom_histogram()
gap_d %>% filter(year == 2002) %>%
  ggplot(aes(gdpPercap, col = continent)) + geom_histogram(position = "dodge")

gap_d %>% filter(year == 2002) %>% 
  ggplot(aes(continent, gdpPercap, col = continent)) + geom_boxplot()

ggplot(gap_d, aes(x = lifeExp, y = gdpPercap, col = continent)) +
  geom_point(alpha = 0.3)
ggplot(gap_d, aes(x = lifeExp, y = gdpPercap, col = continent)) +
  geom_point(alpha = 0.3) + scale_y_log10() # y축을 로그 스케일로 변환함.


gap_d %>% filter(continent == "Asia") %>%
  ggplot(aes(country, gdpPercap)) + geom_bar(stat  =  "identity")                  

gap_d %>% filter(continent == "Asia") %>%
  ggplot(aes(country, gdpPercap)) + geom_bar(stat  =  "identity") + coord_flip()    


install.packages("RColorBrewer")
library(RColorBrewer)

display.brewer.all(type="seq")
display.brewer.all(type="qual")

library(dplyr)

#  Blues 팔레트 그래프
gap_d %>% filter(gdpPercap>500) %>% group_by(year, continent) %>%
  summarize(n = n_distinct(country)) %>% ggplot(aes(x = continent, y = n)) +
  geom_bar(stat = "identity", aes(fill = continent)) +
  scale_fill_brewer(palette = "Blues")

# diverging 팔레트 그래프
gap_d %>% filter(gdpPercap>500) %>% group_by(continent) %>%
  summarize(n = n_distinct(country)) %>%
  ggplot(aes(x = continent, y = n)) +
  geom_bar(stat = "identity", aes(fill = continent)) +
  scale_fill_brewer(palette = "diverging")

# PuOr 팔레트 그래프
gap_d %>% filter(gdpPercap>500) %>% group_by(continent) %>%
  summarize(n =  n_distinct(country)) %>%
  ggplot(aes(x = continent, y = n)) +
  geom_bar(stat = "identity", aes(fill =  continent)) +
  scale_fill_brewer(palette = "PuOr")


# reorder(continent, -n)은 내림차순 정렬
gap_d %>% filter(gdpPercap>500) %>%
  group_by(continent) %>% summarize(n  =  n_distinct(country)) %>%
  ggplot(aes(x = reorder(continent, -n), y =  n)) +
  geom_bar(stat = "identity", aes(fill =  continent)) +
  scale_fill_brewer(palette  = "Reds")

# 3. 시각화 데이터 탐색 #

gap_d %>% filter(year == 1952 & gdpPercap > 13000 & continent == "Americas") 

gap_d %>% filter(country == "Chile") %>%
  ggplot(aes(year, gdpPercap)) + geom_point() +
  geom_line()  + ggtitle ("Chile 연도 변화 시각화")        
gap_d %>% filter(country == "Canada") %>% ggplot(aes(year, lifeExp)) +
  geom_point() + geom_line() + ggtitle ("Canada 연도 변화 시각화")                   

# gdpPercap의 변화 비교 
gap_d %>% filter(country == "Cuba"|country == "Finland"|country == "France"|country == "Germany"|country == "Korea, Rep."|country == "Japan"|country == "China")  %>%
  ggplot(aes(year, gdpPercap, col = country)) + geom_point() + geom_line()

# pop의 변화 비교 
gap_d %>% filter(country == "Cuba"|country == "France"|country == "Indonesia"|country == "Korea, Rep."|country == "Brazil"|country =="Pakistan") %>%
  ggplot(aes(year, pop, col=country)) + geom_point() + geom_line()


# gpc의 변화 비교 
gap_d %>% filter(country == "Cuba"|country == "Finland"|country == "France"|country == "Germany"|country == "Korea, Rep."|country == "Japan"|country == "China")  %>%
  mutate(gpc=gdpPercap*pop) %>% ggplot(aes(year, gpc, col = country)) +
  geom_point() + geom_line() + scale_y_log10()

# 4. 인터랙티스 그래프
install.packages("plotly")
library(plotly)

library(ggplot2)
point <- ggplot(data = mpg, aes(x = hwy, y = displ, col = drv)) + geom_point()
ggplotly(point)

# 시계열 패키지 준비하기 #
install.packages("dygraphs")
library(dygraphs)

economic <- ggplot2::economics
head(economic)

library(xts)

econo <- xts(economic$unemploy, order.by = economic$date)
head(econo)

dygraph(econo)

