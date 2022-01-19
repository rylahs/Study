# 5. With

import pickle

with open("profile.pickle", "rb") as profile_file:
    print(pickle.load(profile_file))
# with는 루프를 탈출하면서 자동으로 닫는다. 
# close를 해주지 않아도 된다.

# no use pickle 

with open("study.txt", "w", encoding="utf8") as study_file:
    study_file.write("Studying hard to Python and All PS")

with open("study.txt", "r", encoding="utf8") as study_file:
    print(study_file.read())
