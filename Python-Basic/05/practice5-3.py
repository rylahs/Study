# 3. 튜플
# 변경 되지 않는 목록 사용할 때 이용
# 속도가 리스트보다 빠름

menu = ("돈까스", "치즈까스")
print(menu[0])
print(menu[1])

# menu.add("생선까스") # Error
name = "김종국"
age = 20
hobby = "Coding"
print(name, age, hobby)
(name, age, hobby) = ("김종국", 21, "Coding")
print(name, age, hobby)
