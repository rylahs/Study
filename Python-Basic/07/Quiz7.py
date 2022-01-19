# Quiz) 표준 체중을 구하는 프로그램을 작성하시오

# * 표준 체중 : 각 개인의 키에 적당한 체중

# (성별에 따른 공식)
#  남자 : 키(m) X 키(m) X 22
#  여자 : 키(m) x 키(m) X 21

#  조건 1. 표준 체중은 별도의 ㅎ마수 내에서 계싼
#    * 함수명 : std_weight
#    * 전달값 : 키(height), 성별(gender)
#  조건 2. 표준 체중은 소수점 둘쨰자리까지 표시

#  (출력 예제)
#  키 175cm 남자의 표준 체중은 67.38kg 입니다.

def std_weight(height, gender):
    weight = 0
    if gender == "남자":
        weight = (height / 100) * (height / 100) * 22
    if gender == "여자":
        weight = (height / 100) * (height / 100) * 21
    return weight

height = 175
gender = "남자"
print("키 {0}cm {1}의 표준 체중은 {2:.2f}kg 입니다.".format(height,gender,std_weight(height,gender)))
gender = "여자"
weight = round(std_weight(height, gender),2)
print("키 {0}cm {1}의 표준 체중은 {2}kg 입니다.".format(height,gender, weight))
height = 165
gender = "여자"
weight = std_weight(height, gender)

#f-string
print(f"키 {height}cm {gender}의 표준 체중은 {weight:.2f}kg 입니다.")
