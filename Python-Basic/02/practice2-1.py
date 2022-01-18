# 자료형
# Number
print(5) # 5
print(-10) # -10
print(3.141592) # 3.141592
print(10000) # 10000
print(5+3) # 8
print(2*8) # 16
print(3*(3+1)) # 12

#문자열
print('풍선') # 풍선
print("나비") # 나비
print("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ") # ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ
print("ㅋ"*15) # ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ

#참 / 거짓
print(5 > 10) # False
print(5 < 10) # True
print(True) # True
print(False) # False
print(not True) # False
print(not (5 > 10)) #True

#애완 동물을 소개해주세요~
animal = "고양이" # "고양이"
name = "해피" # "해피"
age = 4 # 4
hoppy = "낮잠" # 낮잠
is_adult = (age >= 3) # age >= 3 True
print("우리집 " + animal + "의 이름은 " + name + "에요")
hoppy = "공놀이" # 공놀이
#print(animal+"는 " + str(age) + "살이며, " + hoppy +"을 아주 좋아해요.")
#print(name + "는 어른일까요? " + str(is_adult))
print(animal, "는 " ,age, "살이며, ", hoppy,"을 아주 좋아해요.") # comma는 +역할을 하지만 띄어쓰기가 자동으로 된다.
print(name, "는 어른일까요? ", is_adult)
