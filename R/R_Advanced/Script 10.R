# 1. 웹 데이터 정제하고, 탐색적 데이터 분석하기 #

install.packages("stringr")
library(stringr) # 문자열 처리 설계 함수를 포함한 패키지

# 실무 데이터를 데이터프레임 생성
g = read.csv("./data/Google-Playstore.csv",
             header = TRUE, sep = ",", as.is = TRUE)

g = g[-10473, ]  
# 10473 항목 중에서 일부 데이터가 누락된 것을 제거

g$Size = sub("Varies with device DATA", NA, g$Size) 
# Size열에서 “VVaries with device DATA" 를 NA로 표시    
g$Size = sub("M", "e6", g$Size)
# Mega byte를 표시하는 문자 M을 10의 6제곱 유형으로 치환
g$Size = sub("k", "e3", g$Size)
# Kilo byte는 문자 k를 10의 3제곱 유형으로 치환

# 문자열과 기호의 처리과정을 실행하고, 숫자형 데이터로 다시 변환  
g$Size = as.numeric(g$Size)

# 숫자형으로 변환 
g$Installs = as.numeric(g$Installs)

# 데이터 원본의 문자열과 기호 등의 처리 중에 발생한 결측 데이터값을 제거함 
g$Rating = na.omit(g$Rating)
g = na.omit(g)

# 데이터 결함을 제거하고, 데이터 유형에 따른 형 변환
g$Category = as.factor(g$Category)
g$Reviews = as.numeric(g$Reviews)
g$Type = as.factor(g$Type)
g$app_Price = as.numeric(g$app_Price)
g$Content.Rating = as.factor(g$Content.Rating)
g$Genres = as.factor(g$Genres)
g$Last.Updated = as.Date(g$Last.Updated, 'YYYY-MM-DD')

# Date형 변환 처리를 위해 lubridate 라이브러리의 mdy() 함수 적용 
install.packages("lubridate")
library(lubridate) # 날짜 변환 처리
g$Last.Upd = mdy(g$Last.Updated)  # mdy()는 날짜형식으로 변환

library(dplyr)
library(ggplot2)

glimpse(g) 
# glimpse() 대용량 데이터프레임의 모든 열 보기
# 오류가 없는지 데이터 확인

View(g)

g$Rating = as.numeric(g$Rating)


# 유료 앱의 평점, 리뷰, 사이즈의 시각화
g%>%filter(Type=="Paid")%>%ggplot(aes(Reviews, Rating, size = Size)) +
  geom_point(alpha = 0.5) + scale_x_log10() 
# 유료 앱의 평점과 리뷰, 사이즈가 분석 대상

# 리뷰와 설치의 상관관계 
g%>%ggplot(aes(Reviews, Installs)) + geom_point(alpha = 0.5) +
  scale_x_log10() + scale_y_log10()
# 설치 횟수를 일정 단위별 기록하고, 편중된 경향 분포 확인
# 설치 횟수는 일정한 단위까지의 기록으로 인해 그래프 상에서 일부값들만 편중된 분포 결과

# 평점은 일정기간 데이터, 설치는 누적 데이터를 대상
# jitter를 활용해 인위적으로 분산 
g%>%ggplot(aes(Reviews, Installs)) + geom_point(alpha = 0.5) +
  scale_x_log10() + scale_y_log10() + geom_jitter()
# 리뷰와 설치는 출시 초기 앱, 인기가 없는 앱은 평점의 분포가 다양함
# 시간의 흐름 변화 또는 리뷰와 설치 횟수가 증가한 앱은 평점이 특정 수준 이상이 된다는 결과
# 리뷰와 설치횟수가 많아질수록 평점의 최솟값은 증가

# 유료 앱에서 가격 차이는 평점에 어떤 영향을 줄 수 있을까?
# 무료 앱과 유료 앱의 평점 분포 양상을 유사한 대상으로 분석
# 유료의 가격이 3미만 기준
g%>%filter(Type =="Paid" & app_Price < 3)%>%
  ggplot(aes(app_Price)) +
  geom_histogram(binwidth = 0.02)
# 유료 앱의 가격 분포는 3달러 이하 범위에서 확대 양상

# 유료 가격이 3 ~ 6달러 범위의 데이터 분석
g%>%filter(Type =="Paid" & app_Price < 6 & app_Price > 3)%>%
  ggplot(aes(app_Price)) + geom_histogram(binwidth = 0.03)
# 1 달러 간격으로 세분화
# 999가격 정책의 일환으로 3.99, 4.99, 5.99달러로 집중된 가격 분포
# 3.49, 4.49, 5.49달러 등 일정한 간격으로 세분화 특성
# 사용자의 가격 부담을 최소화하여 구매를 쉽게 결정하도록 유도한 전략


# 유료 앱의 가격과 평점의 상관관계
g%>%filter(Type =="Paid")%>%ggplot(aes(app_Price, Rating)) +
  geom_point(alpha = 0.5)
# 시각화 결과 양끝에 편중, 평점은 만족도와 연관됨 
# 400달러 이상의 앱도 다수 존재이지만 평점이 높지 않은 성향
# 평점은 만족도로 분류, 유효한 것으로 평가

# 낮은 가격 분포 성향을 위해 가로축 로그 스케일 적용
g%>%filter(Type=="Paid")%>%ggplot(aes(app_Price, Rating)) +
  geom_point(alpha = 0.5) + scale_x_log10() + xlim(1, 100)
# 평점이 높은 앱들의 가격이 높지 않다는 성향
# 가격 대비 성능의 만족도가 높지 않다는 분석 결과

# 2. 데이터 모델링 성능과 예측하기 #

library(ggplot2)

install.packages("text2vec") # 텍스트 벡터화, 모델링, 샘플 데이터 사용
library(text2vec)
install.packages("caret")
library(caret) # 모델의 성능 평가 

gp <- read.csv("data/googleplaystore_user_reviews.csv")

str(gp)
head(gp)

# 문자 데이터를 훈련 집합(g_train)과 테스트 집합(g_test)로 나눔
g_list = createDataPartition(y = gp$sentiment, p = 0.7, list =  FALSE) 
# createDataPartition() 훈련 데이터와 테스트 데이터로 분할 
# 7:3 p = 0.7은 70%로 설정

g_train = gp[g_list, ]# 훈련 집합
g_test = gp[-g_list, ]# 테스트 집합


library(tm) # 텍스트마이닝 함수 제공
library(SnowballC) # 어간 추출 함수 제공

# 훈련 집합을 바탕으로 DTM 구축하기#

# DTM은 문서에 표시된 단어의 빈도를 표현하는 행렬을 의미 
# 행은 문서이고 열은 단어, 각 요소는 문서에 나타난 단어의 갯수를 표시

# 문서 전처리
doc_g = Corpus(VectorSource(g_train$review))

set.seed(12345)
# 문서 집합을 TextDocument로 표현
doc_g = tm_map(doc_g, content_transformer(tolower))
# tm_map은 매개변수의 값에 따라 텍스트로 변환, tolower 소문자로 변환
doc_g = tm_map(doc_g, removeNumbers) # 숫자 제거
doc_g = tm_map(doc_g, removePunctuation) # 구둣점 제거
doc_g = tm_map(doc_g, removeWords, stopwords('english')) # 영어 불용어 제거
doc_g = tm_map(doc_g, stripWhitespace) # 공백문자 제거

gmd = DocumentTermMatrix(doc_g)
# DocumentTermMatrix()는 전처리한 텍스트로 부터 DTM 적용 함수
dim(gmd) # 단어를 모아 사전 구축
# 2393 x 34357개 사전 
# 2393개의 문서에서 추출한 단어가 34357개 대용량 사전 구축

str(gmd)
inspect(gmd)
# 242845개 1, 81973456개는 0
# inspect 함수는 중요한 문서 10개, 중요한 단어 10개 표시
# 단어의 중요성 결정, app, even, film, good 중요

gmd_small = removeSparseTerms(gmd, 0.80)
# 메모리 소모량이 과다
# removeSparseTerms()는 빈도가 0.8이하 제거

w = as.matrix(gmd_small) # 행렬로 변환
g_Train = as.data.frame(cbind(g_train$sentiment, w))
# cbind 함수를 활용하여 반응변수인 sentiment를 추가해 훈련 데이터 구축

g_Train$V1 = as.factor(g_Train$V1)
colnames(g_Train)[1] = 'g_app'

# g_Train 으로 결정트리와 랜덤 포리스트를 학습

library(rpart)
# Decision Tree 분석 및 시각화 패키지
# 결정 트리와 랜덤 포리스트 학습
# 의사결정트리는 데이터를 나무구조로 도표화한 분석방법이고, 분류와 회귀분석에도 활용
# 랜덤포리스트는 의사결정트리를 랜덤하게 만든 결과이고, 투표방식으로 예측하는 알고리즘 

rP = rpart(g_app~., data = g_Train) # 재귀 분할과 회귀 트리
# formula : Y(종속변수) ~ X(설명변수) 
printcp(rP) # 개체에 대한 테이블 표시
par(mfrow = c(1, 1), xpd = NA) # NA를 제외하고 플로팅
plot(rP) #의사결정트리
text(rP, use.n = TRUE) # 의사결정트리에 텍스트 표현

library(randomForest)
fo = randomForest(g_app~., data = g_Train)


# 테스트 집합으로 DTM 구축
doc_g = Corpus(VectorSource(g_test$review))# 문서 집합을 TextDocument로 표현

set.seed(12345)
doc_g = tm_map(doc_g, content_transformer(tolower))
# tm_map은 매개변수의 값에 따라 텍스트 로 변환, tolower 소문자로 변환
doc_g = tm_map(doc_g, removeNumbers) # 숫자 제거
doc_g = tm_map(doc_g, removePunctuation) # 구둣점 제거
doc_g = tm_map(doc_g, removeWords, stopwords('english')) # 영어 불용어 제거
doc_g = tm_map(doc_g, stripWhitespace) # 공백문자 제거


doc_gest = DocumentTermMatrix(doc_g,
                              control=list(dictionary=gmd_small$dimnames$Terms))

# DocumentTermMatrix는 전처리한 텍스트로 부터 DTM 적용 함수
# control 훈련 집합으로 구성한 사전 지정, 사전의 경로 설정

dim(doc_gest)
# 1025 x 35개 사전 
# 1025개의 문서에서 추출한 단어가 35개 사전 구축
# 행과 열의 개수 1025X35 = 35875

inspect(doc_gest)
# 1025개의 문서에서 35의 단어 추출
# 10434개만 0이 아님, 25441개는 0임
# inspect 함수는 중요한 문서 10개, 중요한 단어 10개 표시
# 단어의 중요성 결정, even, film, good 중요

U = as.matrix(doc_gest) # 행열 구축
g_Test = as.data.frame(cbind(g_test$sentiment, U))
# cbind 함수를 활용하여 반응변수인 sentiment를 추가해 테스트 데이터 구축

g_Test$V1 = as.factor(g_Test$V1)
colnames(g_Test)[1] = 't_app'

# 데이터 분석 예측하기 #
# 랜덤포리스트로 예측을 실행한 혼동 행렬 결과
pre = predict(rP, newdata = g_Test, type = "class") # 결정트리 정확율
table(pre, g_Test$t_app) # (274+385)/1025 = 64.2% 정확율 

pf = predict(fo, newdata = g_Test) # 랜덤 포리스트 예측 정확율
table(pf, g_Test$t_app) # (345+354)/1025 = 68.1% 정확율

