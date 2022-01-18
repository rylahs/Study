# 2.문자열 슬라이싱
jumin = "990120-1234567"
print("성별 : " + jumin[7])
print("연 : " + jumin[0:2]) # 0 : 2 => 0 ~ 1 앞은 포함 뒤는 미만 (0, 1)
print("월 : " + jumin[2:4]) # 2 : 4 => 2 ~ 3
print("일 : " + jumin[4:6]) # 4 : 6 => 4 ~ 5

# print("생년월일 : " + jumin[0:6])
print("생년월일 : " + jumin[:6]) # 처음부터 6 직전까지
#print("뒤 7자리 : " + jumin[7:14]) 
print("뒤 7자리 : " + jumin[7:]) # 7부터 End까지
print("뒤 7자리 (뒤에서부터) : " + jumin[-7:]) #맨 뒤에서부터 끝까지