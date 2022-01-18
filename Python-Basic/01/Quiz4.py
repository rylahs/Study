# Quiz) 사이트별로 비밀번호를 만들어 주는 프로그램을 작성하시오

# 예) http://naver.com
# 규칙 1 : http:// 부분은 제외 ===>  naver.com
# 규칙 2 : 처음 만나는 점(.) 이후 부분은 제외 => naver
# 규칙 3 : 남은 글자 중 처음 세자리 + 글자 갯수 + 글자내 'e' 갯수 + "!"로 구성

# 예) 생성된 비밀번호 : nav51!

# 직접 작성한 답안
origin = "http://naver.com"
# origin = origin[origin.index("/") + 2:]
origin = origin.replace("http://", "")
print(origin)
origin = origin[:origin.index(".")]
print(origin)
pwd = origin[0:3] + str(len(origin)) + str(origin.count("e")) + "!"
print(pwd)

print()
# 예제
url = "http://naver.com"
my_str = url.replace("http://", "") # 규칙 1
#print(my_str)
my_str = my_str[:my_str.index(".")]  # my_str[0:5] -> 0 ~ 5 직전까지
#print(my_str)
password = my_str[:3] + str(len(my_str)) + str(my_str.count("e")) + "!"

