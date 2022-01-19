# 2. __init__
class Unit:
    def __init__(self, name, hp, damage): # 클래스 생성자
        self.name = name
        self.hp = hp
        self.damage = damage
        print(f"{self.name} 유닛이 생성되었습니다.")
        print(f"체력 {self.hp}, 공격력 {self.damage}")


# 클래스로 만들어지는 것 : 객체
# 마린, 탱크 = 인스턴스
marine1 = Unit("마린", 40, 5)
marine2 = Unit("마린", 40, 5)
tank = Unit("탱크", 150, 35)

#marine3 = Unit("마린") # 오류
#marine3 = Unit("마린", 40) #오류