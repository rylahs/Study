# 2. 다양한 출력 포맷
# 빈 자리는 빈 공간으로 두고 오른쪽 정렬을 하되, 총 10자리 공간을 확보
print("{0: >10}".format(500))
print("{0: >10}".format(-500))
# 양수 일 때는 +로 표시, 음수 일때는 -로 표시
print("{0: >+10}".format(500))
print("{0: >+10}".format(-500))
print("{0: >+10}".format(0))

# 왼쪽 정렬을 하고, 빈칸을 _로 채움
print("{0:_<10}".format(500))
print("{0:_<+10}".format(500))

# 3자리 마다 ,를 찍어 주기
print("{0:,}".format(100000000000000000000000000000))
# 3자리 마다 ,를 찍어 주기, +- 부호도 찍기
print("{0:+,}".format(100000000000000000000000000000))
print("{0:+,}".format(-100000000000000000000000000000))

# 3자리마다 ,를 찍어주기 , +- 부호도 찍기, 자릿수 확보하기
# 돈이 많으면 행복하니까 빈 자리는 ^로 채워주기
print("{0:^<+50,}".format(10000000000000000000000))

# 소수점 출력
print("{0}".format(5/3))
# 소수 점 특정 자리수만큼 출력
print("{0:.2f}".format(5/3))
decimal = 5/3
print(f"{decimal:.5f}")