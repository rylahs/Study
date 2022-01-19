# 3. 기본 값
def profile(name, age, main_lang):
    print("이름 : {0}\t나이 : {1}\t주 사용 언어: {2}\t"\
        .format(name, age, main_lang))

profile("유재석", 20, "Python")
profile("김태호", 25, "Java")

#같은 학교 같은 학년 같은 반 같은 수업.

def profile(name, age = 17, main_lang="Python"):
    print("이름 : {0}\t나이 : {1}\t주 사용 언어: {2}\t"\
        .format(name, age, main_lang))
profile("유재석")
profile("김태호")