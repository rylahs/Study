# 1. 표준 입출력
print("Python", "Java", sep=", ")
print("Python", "Java", "JavaScript", sep=" vs ")
print()
print("Python", "Java", sep=",")#, end="?")
print(" 무엇이 더 재밌을까요?")
print("Python", "Java", sep=",", end="?") # end 부분의 default = \n end 변경 가능
print(" 무엇이 더 재밌을까요?")

import sys
print("Python", "Java", file=sys.stdout) # stdout
print("Python", "Java", file=sys.stderr) # stderr (에러 처리)

print()

#시험 성적
scores = {"수학":0, "영어":50, "코딩":100}
for subject, score in scores.items():
    print(subject.ljust(8), str(score).rjust(4),sep=":")

# 은행 대기 순번표
# 001, 002, 003
for num in range(1,21):
    print("대기 번호 : " +str(num).zfill(3)) 


answer = input("아무 값이나 입력하세요 : ") # input은 항상 문자열로 저장된다.
print(type(answer))
print(f"입력 하신 값은 {answer}입니다.")
