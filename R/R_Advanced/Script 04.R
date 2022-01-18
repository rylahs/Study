# 1. 입출력 관계 라이브러리를 이용하여 데이터 가공하기 #

library(gapminder) 
library(dplyr)
glimpse(gapminder)

baseR <- gapminder

baseR[, c("year", "pop")]

baseR[, c("year", "lifeExp", "pop")]

baseR[10:20, ]

baseR[baseR$country == "Albania", ]

baseR[baseR$country == "Albania", "lifeExp"]

baseR[baseR$country == "Albania", c("year","pop")]

baseR[baseR$country == "Albania" & baseR$year > 1982, c("pop", "lifeExp")]

apply(baseR[baseR$country == "Albania", c("pop", "lifeExp")], 2, max)


select(baseR, country, lifeExp, pop)

filter(baseR, continent == "Europe")

summarise(baseR, pop_mean = mean(pop))

summarise(group_by(baseR, continent), pop_mean = mean(pop))

summarise(group_by(baseR, continent, country), pop_mean = mean(pop))

baseR %>% group_by(continent, country) %>%
  summarise(pop_mean = mean(pop))


data1 = filter(baseR, country == "Cameroon")      
data2 = select(data1, country, pop, lifeExp)  
data3 = apply(data2[ , c("pop")], 2, mean)
data3

baseR %>% filter(country == "Cameroon") %>%
  select(country, pop, lifeExp) %>%
  summarise(pop_avg = mean(pop))


# midwest 데이터분석

# midwest 불러오기
library(dplyr)
midwest1 <- as.data.frame(ggplot2::midwest)


# midwest1에 백분율 변수 추가
midwest1 <- midwest1 %>%
  mutate(ratio_asian = (poptotal-popasian)/poptotal*100)


midwest1 %>%
  arrange(desc(ratio_asian)) %>%   # ratio_asian 내림차순 정렬
  select(county, ratio_asian) %>%  # county, ratio_asian 추출
  head(5)                          # 상위 5행 출력


# midwest1에 grade 변수 추가
midwest1 <- midwest1 %>%
  mutate(grade = ifelse(ratio_asian >= 98, "large",
                        ifelse(ratio_asian >= 96, "middle", "small")))

# 미성년 비율 등급 빈도표
table(midwest1$grade)


midwest1 %>%
  mutate(ratio_adults = (popadults/poptotal)*100) %>%  # 백분율 ratio_adults변수 추가
  arrange(ratio_adults) %>%                           # 오름차순 정렬
  select(state, county, ratio_adults) %>%             # 기준변수 추출
  head(5)                                           # 상위 5행 출력 

# 2. 데이터 그룹 단위로 방대한 데이터 요약하기  # 

checkup <- read.csv("data/건강검진자료.csv", header=TRUE, sep = ",")

str(checkup)

(시_avg = checkup %>% group_by(도시) %>%
    summarize(대상_avg = mean(대상인원), 수검_avg = mean(수검인원)))

(시_avg = checkup %>% group_by(도시, 시군구) %>%
    summarize(대상_avg = mean(대상인원), 수검_avg = mean(수검인원)))

시_avg = checkup %>% group_by(도시, 시군구, 성별) %>%
  summarize(대상_avg = mean(대상인원), 수검_avg = mean(수검인원))
시_avg

install.packages("ggplot2")
library(ggplot2)

library(dplyr)

시_avg %>% filter(도시!= "서울") %>%
  ggplot(aes(대상_avg, 수검_avg, col = 성별)) +
  geom_line() + facet_wrap(~도시)

arrange(시_avg, desc(대상_avg))

시_avg1 = 시_avg %>% filter(도시 != "서울")
시_avg1

시_avg[시_avg$대상_avg == max(시_avg$대상_avg), ]

(시_avg = checkup %>% group_by(도시, 성별) %>%
    summarize(대상_avg = mean(대상인원), 수검_avg = mean(수검인원)))


# 실전 데이터 분석
mpg1 <- as.data.frame(ggplot2::mpg) 
mpg1 %>%
  group_by(manufacturer) %>%           # 회사별로 그룹화
  filter(class == "compact") %>%       # compact 추출
  mutate(avg = (cty+hwy)/2) %>%        # 통합 연비 avg 변수 생성
  summarise(mean_avg = mean(avg)) %>%  # 통합 연비 mean_avg 평균 산출
  arrange(desc(mean_avg)) %>%          # mean_avg 내림차순 정렬
  head(10)                                       
