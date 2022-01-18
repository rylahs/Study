# 1단원 R을 이용한 전처리와 DTM 구축하기 #

install.packages("RCurl")
install.packages("XML") 

library(RCurl)  # 웹 서버와 접속
library(XML)    # 웹 문서 처리

text = readLines('https://en.wikipedia.org/wiki/Coronavirus_disease_2019') 
# URL에서 html 파일을 읽어오는 역할 
data = htmlParse(text, asText = TRUE) 
# htmlParse는 R 데이터형으로 변환
clean_text = xpathSApply(data,"//p", xmlValue)
# xpathSApply는 R 데이터형으로 변환

install.packages("tm")
install.packages("SnowballC")

library(tm) # 텍스트마이닝 함수 제공 패키지
library(SnowballC) # 어간 추출 함수 제공 패키지

doc_t = Corpus(VectorSource(clean_text)) # 문서 집합을 TextDocument로 표현

inspect(doc_t) # 문서 정보 
set.seed(12345)
doc_t = tm_map(doc_t, content_transformer(tolower)) 
# tm_map()는 매개변수의 값에 따라 텍스트로 변환, tolower 소문자로 변환
doc_t = tm_map(doc_t, removeNumbers) # 숫자 제거
doc_t = tm_map(doc_t, removePunctuation) # 구둣점 제거
doc_t = tm_map(doc_t, removeWords, stopwords('english')) # 영어 불용어 제거
doc_t = tm_map(doc_t, stripWhitespace) # 공백문자 제거

data_text = DocumentTermMatrix(doc_t) 
# DocumentTermMatrix는 전처리한 텍스트로 부터 DTM 적용 함수
# DTM은 단어의 빈도를 표현할 수 있는 행렬을 의미함

dim(data_text) # 행과 열의 개수 109X1887 = 205683

inspect(data_text) # 상세 내용 요약
# 4063개만 0이 아니고, 201620개는 0임
# inspect 함수의 중요한 문서 10개, 중요한 단어 10개로 표시
# 단어의 중요도 결정, covid, disease 중요

# 단어 구름 모양으로 표현하기 #
library(wordcloud)

dt = as.matrix(data_text) # DTM 행렬로 변환
vt = sort(colSums(dt), decreasing = TRUE) # 빈도가 높은순으로 단어 정렬
dtt = data.frame(word = names(vt), freq = vt) 
wordcloud(words = dtt$word, freq = dtt$freq, min.freq = 1,
          max.words = 30, random.order = FALSE, rot.per = 0.5) 
# max.words = 30 빈도가 높은 상위 30개 단어 표시
# rot.per = 0.5 세로로 배치하고, 단어 비율 50%
# 빈도가 높을수록 큰 폰트이고, 중앙에 배치
# covid 근처에 위치
# inspect 함수의 결과와 동일, covid, disease, virus 

library(RColorBrewer)

pale = brewer.pal(11,"RdYlGn")
wordcloud(words = dtt$word, freq = dtt$freq, min.freq = 1,
          max.words = 30, random.order = FALSE,
          rot.per = 0.30, colors = pale)
# 11개의 팔레트 색상 중에서 "RdYlGn" 팔레트 사용

wordcloud(words = dtt$word, freq = dtt$freq, min.freq = 1,
          max.words = 30, random.order = FALSE,
          rot.per = 0.30, colors = pale, family = "mono", font = 7)
# family = "mono" 폰트, font = 7 크기 지정

library(wordcloud2)
wordcloud2(dtt)
# 자동으로 색상 처리하고, 단어가 수직과 수평 뿐만 아니라 다양한 방향으로 표현 
# wordcloud2는 단어의 개수 설정 옵션이 없음
# 단어 수를 한정할 필요가 있음

dt1 = dtt[1:300, ]        
# 300개 단어의 데이터만 표시
wordcloud2(dt1, shape = 'circle') 
# 원형으로 단어구름 표시
wordcloud2(dt1, minRotation = pi/8, maxRotation = pi/8, rotateRatio = 1.0)
# 회전 각도 pi/8로 지정, rotateRatio = 1.5로 모든 단어가 같은 방향 
findFreqTerms(data_text, lowfreq = 30) 
# findFreqTerm는 단어 빈도에 따라 표시
# lowfreq = 30는 발생 빈도가 30이상인 단어만 표현

barplot(dtt[1:7, ]$freq, las = 2, names.arg = dtt[1:7,]$word,
        col = 'lightgreen', main = '상위 빈도 단어', ylab = '단어 빈도')


# 2단원 데이터 모델링 예측과 평가하기 #

install.packages("text2vec") 
library(text2vec) # 텍스트 벡터화, 모델링
install.packages("caret")
library(caret) # 모델의 성능 평가 

Movie_survey <- read.csv("data/Movie_survey.csv")

str(Movie_survey)

head(Movie_survey)

# 문자 데이터를 훈련 집합(m_train)과 테스트 집합(m_test)로 나눔
t_list = createDataPartition(y = Movie_survey$interesting,
                             p = 0.7, list =  FALSE)
# 샘플을 7:3으로 훈련집합 3500, 테스트 집합 1500

m_train = Movie_survey[t_list, ] # 훈련 집합
m_test = Movie_survey[-t_list, ] # 테스트 집합

library(tm) # 텍스트마이닝 함수 제공
library(SnowballC) # 어간 추출 함수 제공

# 훈련 집합을 바탕으로 DTM 구축하기  #

# DTM은 문서에 표시된 단어의 빈도를 표현하는 행렬을 의미 
# 행은 문서이고 열은 단어, 각 요소는 문서에 나타난 단어의 갯수를 표시

# 문서 전처리
doc_t = Corpus(VectorSource(m_train$survey)) # survey 후기
# 문서 집합을 TextDocument로 표현
set.seed(12345)
doc_t = tm_map(doc_t, content_transformer(tolower))
# tm_map은 매개변수의 값에 따라 텍스트로 변환, tolower 소문자로 변환
doc_t = tm_map(doc_t, removeNumbers)# 숫자 제거
doc_t = tm_map(doc_t, removePunctuation) # 구둣점 제거
doc_t = tm_map(doc_t, removeWords, stopwords('english')) # 영어 불용어 제거
doc_t = tm_map(doc_t, stripWhitespace) # 공백문자 제거

tmd = DocumentTermMatrix(doc_t)
# DocumentTermMatrix()는 전처리한 텍스트로 부터 DTM 적용 함수

dim(tmd)  # 단어를 모아 사전 구축
# 3500 x 41730개 사전 
# 3500개의 문서에서 추출한 단어가 41730개 대용량 사전 구축

str(tmd)
inspect(tmd)
# 351863개만 0이 아니고, 145703137개는 0임
# inspect 함수는 중요한 문서 10개, 중요한 단어 10개 표시
# 단어의 중요성 결정, even film good 중요

tmd_small = removeSparseTerms(tmd, 0.80) 
# 메모리 소모량이 과다
# removeSparseTerms()는 빈도가 0.8이하 제거

w = as.matrix(tmd_small) # 행렬로 변환
d_Train = as.data.frame(cbind(m_train$interesting, w)) 
# cbind 함수를 활용하여 반응변수인 interesting를 추가해 훈련 데이터 구축

d_Train$V1 = as.factor(d_Train$V1)
colnames(d_Train)[1] = 'train_mv'

# d_Train 으로 결정트리와 랜덤 포리스트를 학습

library(rpart) 
# Decision Tree 분석 및 시각화 패키지
# 결정 트리와 랜덤 포리스트 학습
# 의사결정트리는 데이터를 나무구조로 도표화한 분석방법이고, 분류와 희귀분석에도 활용
# 랜덤포리스트는 의사결정트리를 랜덤하게 만든 결과이고, 투표방식으로 예측하는 알고리즘 

rP = rpart(train_mv~., data = d_Train) # 재귀 분할과 회귀 트리
# formula : Y(종속변수) ~ X(설명변수)   

printcp(rP) # 개체에 대한 테이블 표시
par(mfrow = c(1, 1), xpd = NA) # NA를 제외하고 플로팅
plot(rP) #의사결정트리
text(rP, use.n = TRUE) # 의사결정트리에 텍스트 표현

library(randomForest)
fo = randomForest(train_mv~., data = d_Train) 

# 테스트 집합으로 DTM 구축
doc_t = Corpus(VectorSource(m_test$survey))# 문서 집합을 TextDocument로 표현
set.seed(12345)
doc_t = tm_map(doc_t, content_transformer(tolower))
# tm_map은 매개변수의 값에 따라 텍스트 로 변환, tolower 소문자로 변환
doc_t = tm_map(doc_t, removeNumbers)# 숫자 제거
doc_t = tm_map(doc_t, removePunctuation)# 구둣점 제거
doc_t = tm_map(doc_t, removeWords, stopwords('english'))# 영어 불용어 제거
doc_t = tm_map(doc_t, stripWhitespace)# 공백문자 제거

doc_test = DocumentTermMatrix(doc_t,
                              control=list(dictionary=tmd_small$dimnames$Terms))
# DocumentTermMatrix는 전처리한 텍스트로 부터 DTM 적용 함수
# control 훈련 집합으로 구성한 사전 지정, 사전의 경로 설정

dim(doc_test)
# 1500 x 34개 사전 
# 1500개의 문서에서 추출한 단어가 34개 사전 구축
# 행과 열의 개수 1500X34 = 51000

inspect(doc_test)
# 1500개의 문서에서 34의 단어 추출
# 15213개만 0이 아니고 35787개는 0임
# inspect 함수는 중요한 문서 10개, 중요한 단어 10개 표시
# 단어의 중요성 결정, even, film, good 중요

U = as.matrix(doc_test) # 행열 구축
d_Test = as.data.frame(cbind(m_test$interesting, U))
# cbind 함수를 활용하여 반응변수인 interesting를 추가해 테스트 데이터 구축
d_Test$V1 = as.factor(d_Test$V1)
colnames(d_Test)[1] = 'test_mv'

# 랜덤포리스트로 예측을 실행한 혼동 행렬 결과
pre = predict(rP, newdata = d_Test, type = 'class') # 결정트리 정확율
table(pre, d_Test$test_mv) # (409+574)/1500 = 65.5% 정확률 

pf = predict(fo, newdata = d_Test)  # 랜덤 포리스트 예측 정확률
table(pf, d_Test$test_mv) # (468+525)/1500 = 66.2% 정확률



