class Unit:
    def __init__(self):
        print("Unit 생성자")

class Flyable:
    def __init__(self):
        print("Flyable 생성자")

class FlyableUnit(Unit, Flyable):
    def __init__(self):
        super().__init__()

class FlyableUnit_F(Flyable, Unit):
    def __init__(self):
        super().__init__()

class FlyableUnit_D(Flyable, Unit):
    def __init__(self):
        Unit.__init__(self)
        Flyable.__init__(self)
# 드랍쉽
dropship = FlyableUnit()
dropship = FlyableUnit_F()
dropship = FlyableUnit_D()