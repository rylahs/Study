#include <stdio.h>
#include <time.h>
// 5마리의 고양이가 있다.
// 아무키나 눌러서 고양이를 뽑되
// 5마리 모두 다 수집해서 키우면 된다.
// 중복 발생 가능

// 고양이 
// 이름 나이 성격 키우기 난이도(레벨)

typedef struct {
	char* name; // 이름
	int age; // 나이
	char* character; // 성격
	int level; //난이도
}CAT;

int collection[5] = { 0, };

CAT cats[5];

void initCats(); // 정보 처기화
void printCat(int selected);
int checkCollection();
int main_struct_project(void) {
	srand(time(NULL)); // 난수 초기화

	initCats();

	while (1) {
		printf(" 두근두근! 어느 고양이의 집사가 될까요?\n 아무 키나 눌러서 확인하세요!");
		getchar();

		int selected = rand() % 5; // 0 ~ 4 정보 반환
		printCat(selected); // 뽑은 고양이 처리
		collection[selected] = 1; // 고양이 뽑은 배열은 1로 처리

		int collectAll = checkCollection();

		if (collectAll == 1) {
			getchar();
			break;
		}
	}

	return 0;
}
void initCats() {
	cats[0].name = "깜냥이";
	cats[0].age = 5;
	cats[0].character = "온순";
	cats[0].level = 1;

	cats[1].name = "귀요미";	
	cats[1].age = 3;
	cats[1].character = "날카로움";
	cats[1].level = 2;

	cats[2].name = "수줍이";
	cats[2].age = 7;
	cats[2].character = "늘 잠만 잠";
	cats[2].level = 3;

	cats[3].name = "까꿍이";
	cats[3].age = 2;
	cats[3].character = "시끄러움";
	cats[3].level = 4;

	cats[4].name = "돼냥이";
	cats[4].age = 1;
	cats[4].character = "배고픔";
	cats[4].level = 5;
}

void printCat(int selected) {
	printf("\n\n=== 당신은 이 고양이의 집사가 되었어요! ===\n\n");
	printf(" 이름       : %s\n", cats[selected].name);
	printf(" 나이       : %d\n", cats[selected].age);
	printf(" 특징(성격) : %s\n", cats[selected].character);
	//printf(" 레벨       : %d\n", cats[selected].level);
	printf(" 레벨       : ");

	for (int i = 0; i < cats[selected].level; i++) {
		printf("%s", "☆");
	}
	printf("\n");
}

int checkCollection() {
	// 현재 보유한 고양이 목록도 출력
	// 다 모았는지도 반환

	int collectAll = 1;
	// 고양이 목록
	printf("\n\n === 보유한 고양이 목록이에요 === \n\n");
	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0) { // 고양이 수집 X
			printf("%10s", "(빈 박스)");
			collectAll = 0;
		}
		else { // 고양이 수집 O
			printf("%10s", cats[i].name);
		}
	}
	printf("\n===========================================\n\n");

	return collectAll;


}