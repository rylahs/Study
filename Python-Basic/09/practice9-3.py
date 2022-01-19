# 3. 멤버 변수
# 클래스 내에 정의 된 변수들을 통침함
class Unit:
    def __init__(self, name, hp, damage): # 클래스 생성자
        self.name = name
        self.hp = hp
        self.damage = damage
        print(f"{self.name} 유닛이 생성되었습니다.")
        print(f"체력 {self.hp}, 공격력 {self.damage}")

# 레이스 : 공중 유닛, 비행기. 클로킹(상대방에게 보이지 않음)
wraith1 = Unit("레이스", 80, 5)
print("유닛 이름은 {0}, 공격력 : {1}".format(wraith1.name, wraith1.damage))

# 마인드 컨트롤 : 상대방 유닛을 내 것으로 만드는 것 (빼앗음)
wraith2 = Unit("빼앗은 레이스", 80, 5)
wraith2.clocking = True

# 파이썬에서는 객체에 외부에서 변수를 추가로 할당해서 사용할 수 있다.
# 하지만 각 객체마다 따로 있을 수 있는 거라 연결된 클래스에서 만들어진 다른 객체에서 사용할 수는 없다.
if wraith2.clocking == True:
    print(f"{wraith2.name}는 현재 클로킹 상태입니다.")