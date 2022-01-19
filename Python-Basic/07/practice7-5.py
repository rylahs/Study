#5. 가변 인자
def profile(name, age, lang1, lang2, lang3, lang4, lang5):
    print("이름 : {0}\t나이 : {1}\t".format(name, age), end= " ") # end 부분이 있으면 줄바꿈 하지 않고 end 부분처럼 빈칸 하나만 진행
    print(lang1, lang2, lang3, lang4, lang5)


profile("유재석", 20, "Python", "Java", "C", "C++", "C#")
profile("김태호", 25, "Kotlin", "Swift", "", "", "")



def profile(name, age, *language):
    print("이름 : {0}\t나이 : {1}\t".format(name, age), end= " ") # end 부분이 있으면 줄바꿈 하지 않고 end 부분처럼 빈칸 하나만 진행
    for lang in language:
        print(lang, end=" ")
    print()




profile("유재석", 20, "Python", "Java", "C", "C++", "C#", "JavaScript")
profile("김태호", 25, "Kotlin", "Swift")