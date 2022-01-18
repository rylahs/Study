# 1. 리스트 []

# 지하철 칸별로 10명, 20명, 30명
# subway1 = 30;
# subway2 = 40;
# subway3 = 50;

subway = [30, 40, 50]
print(subway)

subway = ["유재석", "조세호", "박명수"]
print(subway)

# 조세호씨가 몇 번째 칸에 타고 있는가?
print(subway.index("조세호"))

# 하하씨가 다음 정류장에서 다음 칸에 탔음
subway.append("하하")
print(subway)

# 정형돈씨를 유재석 / 조세호 사이에 태워보기
#subway.insert(1, "정형돈")
subway.insert((subway.index("유재석") + 1), "정형돈")
print(subway)

# 지하철에 있는 사람들을 한 명씩 뒤에서 꺼냄
print(subway.pop())
print(subway)

# print(subway.pop())
# print(subway)

# print(subway.pop())
# print(subway)

# 같은 이름의 사람이 몇 명 있는지 확인하기
subway.append("유재석") 
print(subway)
print(subway.count("유재석"))


# 정렬도 가능
num_list = [10, 2, 4, 7, 1]
num_list.sort()
print(num_list)

# 순서 뒤집기도 가능
num_list.reverse()
print(num_list)

# 모두 지우기
num_list.clear()
print(num_list)


# 다양한 자료형 함께 사용 가능
num_list = [10, 2, 4, 7, 1]
mix_list = ["조세호", 175, False]
print(mix_list)

# 리스트 확장
num_list.extend(mix_list)
print(num_list)
