# 2. 사전

cabinet = {3:"유재석", 100:"김태호"} # Key : Value
print(cabinet)
print(cabinet[3])
print(cabinet[100])
print(cabinet.get(3))
print(cabinet.get(100))

# print(cabinet[5]) # Error
print(cabinet.get(5)) # no Error 
print(cabinet.get(5, "사용가능"))
print("hi")

print()

print(3 in cabinet) # True
print(5 in cabinet) # False

cabinet = {"A-3":"유재석", "B-100":"김태호"}
print(cabinet["A-3"])
print(cabinet["B-100"])


# 새 손님
print(cabinet)
cabinet["A-3"] = "김종국"
cabinet["C-20"] = "조세호"

print(cabinet)

# 손님이 감
del cabinet["A-3"]
print(cabinet)

# key 들만 출력
print(cabinet.keys())

# Value 들만 출력
print(cabinet.values())

# key, value 쌍으로 출력
print(cabinet.items())

# 목욕탕 폐점
cabinet.clear()
print(cabinet)
