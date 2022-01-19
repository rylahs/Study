# 6. 지역변수와 전역변수

gun = 10

def checkpoint(soldiers): # 경계 근무
    global gun # 전역 변수 gun을 함수 내에서 사용
    gun = gun - soldiers
    print("[함수 내] 남은 총 : {0}".format(gun))


def checkpoint_ret(gun, soldiers): # 경계 근무
    gun = gun - soldiers
    print("[함수 내] 남은 총 : {0}".format(gun))
    return gun


print("전체 총 : {0}".format(gun))
checkpoint(2) # 2명이 경계 근무를 나감
gun = checkpoint_ret(gun, 3)
print("남은 총 : {0}".format(gun))
