#include <stdio.h>
#include <time.h>
// 10마리의 서로 다른 동물 (각 카드 2장씩) 
// 사용자로부터 2개의 입력 값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
// 모든 동물의 쌍을 찾으면 게임 종료
// 총 실패 횟수 알려주기

int arrayAnimal[4][5]; // 카드 지도 총 20장
int checkAnimal[4][5]; // 뒤집혀졌는지 여부 확인
char* strAnimal[10];
void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getemptyPos();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();// 동물 위치 출력
void printQuestions();  // 문제출력 (카드 지도)



int main_m_array_project(void) {
	srand(time(NULL)); // 난수초기화


	initAnimalArray();
	initAnimalName();

	shuffleAnimal();
	int failCount = 0; // 실패 횟수

	while (1) {
		int select1 = 0; // 사용자 선택한 처음 수
		int select2 = 0; // 사용자가 선택한 두번째 수

		printAnimals();// 동물 위치 출력
		printQuestions();  // 문제출력 (카드 지도)
		printf("뒤집을 카드를 2개 고르세요 : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
			continue;

		// 좌표에 해당하는 카드를 뒤집어보고 같은지 다른지 확인
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// 같은 동물인 경우
		if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 // 카드가 안뒤집혀짐
			&& checkAnimal[secondSelect_x][secondSelect_y] == 0) // 카드가 안뒤집혀짐

			&&

			(arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y])) {
			printf("\n\n빙고 ! : %s 발견!!\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}

		// 다른 동물
		else {
			printf("\n\n 땡!! (틀렸거나 이미 뒤집혀진 카드입니다)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		// 모든 동물을 찾았는지 여부 1. 참, 2. 거짓
		if (foundAllAnimals() == 1) {
			printf("\n\n축하합니다. 모든 동물을 찾았네요.\n");
			printf("지금까지 총 %d번 실수하셨습니다. \n",failCount);
			exit(0);
		}
	}
	return 0;
}

void initAnimalArray() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1;
			checkAnimal[i][j] = 0;
		}
	}
}
void initAnimalName() {
	strAnimal[0] = "원숭이";
	strAnimal[1] = "하마";
	strAnimal[2] = "강아지";
	strAnimal[3] = "고양이";
	strAnimal[4] = "돼지";
	strAnimal[5] = "코끼리";
	strAnimal[6] = "기린";
	strAnimal[7] = "낙타";
	strAnimal[8] = "타조";
	strAnimal[9] = "호랑이";
}

void shuffleAnimal() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = getemptyPos();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

int getemptyPos() {
	while (1) {
		int ranPos = rand() % 20; // 0 ~ 19 
		int x = conv_pos_x(ranPos);
		int y = conv_pos_y(ranPos);

		if (arrayAnimal[x][y] == -1) {
			return ranPos;
		}
	}
	return 0;
}

int conv_pos_x(int x) {
	return x / 5;
}

int conv_pos_y(int y) {
	return y % 5;
}
void printAnimals() {// 동물 위치 출력
	//□□□□□
	//□□□□□
	//□□□□□
	//□□□□□
	printf("\n========이건 비밀인데 몰래 보여주는거야 ==============\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n==========================================\n\n");
}
void printQuestions() {  // 문제출력 (카드 지도)
	printf("\n\n(문제)\n\n");
	int seq = 0;
	                 // seq
	//□□□□□  0  1  2  3  4      0 0 0 0 0
	//□□□□□  5  6  7  8  9      1 0 0 0 0
	//□□□□□ 10 11 12 13 14      0 0 0 0 1
	//□□□□□ 15 16 17 18 19      0 0 0 0 0

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			// 카드를 뒤집어서 정답을 맞혔으면 '동물 이름'
			// 아직 뒤집지 못했으면 (정답을 못맞췄으면 뒷면 -> 위치를 나타내는 숫자
			if (checkAnimal[i][j] != 0) {
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			else {
				printf("%8d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}

int foundAllAnimals() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (checkAnimal[i][j] == 0) {
				return 0;
			}
		}
	}
	return 1;
}