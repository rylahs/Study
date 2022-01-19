# 5. 상속 (Inheritance)

# 일반 유닛
class Unit:
    def __init__(self, name, hp): # 클래스 생성자
        self.name = name
        self.hp = hp

# 공격 유닛
class AttackUnit(Unit):
    def __init__(self, name, hp, damage):
        Unit.__init__(self, name, hp)
        self.damage = damage
    def attack(self, location):
        print(f"{self.name} : {location} 방향으로 적군을 공격합니다. [공격력 : {self.damage}]")
    
    def damaged(self, damage):
        print(f"{self.name} : {damage} 데미지를 입었습니다.")
        self.hp -= damage
        print(f"{self.name} : 현재 체력은 {self.hp} 입니다.")

        if self.hp <= 0:
            print(f"{self.name} : 파괴되었습니다.")


# 파이어뱃 : 공격 유닛, 화염 방사기
firebat1 = AttackUnit("파이어뱃", 50, 16)
firebat1.attack("5시")

# 공격을 두번 받는다고 가정
firebat1.damaged(25)
firebat1.damaged(25)
