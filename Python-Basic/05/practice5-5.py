# 5. 자료구조의 변경
# Coffee Shop
menu = {"커피", "우유", "주스"}
print(menu, type(menu)) # class set

menu = list(menu)
print(menu, type(menu)) # class list

menu = tuple(menu)
print(menu, type(menu)) # class tuple

menu = set(menu)
print(menu, type(menu)) # class set

