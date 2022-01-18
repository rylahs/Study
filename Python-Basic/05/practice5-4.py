# 집합 (Set)
# 중복 안됨 순서 없음
my_set = {1,2,3,3,3}
print(my_set)

java = {"유재석", "김태호", "양세형"}
python = set(["유재석", "박명수"])

# 교집합 (Java와 Python을 모두 할 수 있는 개발자)
print(java & python)
print(java.intersection(python))

# 합집합 (Java도 할 수 있거나 Python도 할 수 있는 개발자
print(java | python)
print(java.union(python))

# 차집합 (Java는 할 수 있지만 Python은 할 줄 모르는 개발자)
print(java - python)
print(java.difference(python))

# Python 할 줄 아는 사람이 늘어남
python.add("김태호")
print(python)

# Java를 까먹었어요
java.remove("김태호")
print(java)