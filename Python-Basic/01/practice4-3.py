# 3. 문자열 처리 함수
python = "Python is Amazing"
print(python.lower()) # All Lower Case
print(python.upper()) # All Upper Case
print(python[0].isupper()) # True
print(python[0].islower()) # False
print(len(python)) # python Length
print(python.replace("Python", "C++"))
index = python.index("n")
print(index) # 5
index = python.index("n", index + 1) # 첫 n 다음 n 찾기
print(index) # 15

print(python.find("n")) # Find n
print(python.find("Java")) # Not Find is -1
# print(python.index("Java")) # Error

print("hi") # index 오류 나면 진행이 되지 않음
print(python.count("n")) # Counting
