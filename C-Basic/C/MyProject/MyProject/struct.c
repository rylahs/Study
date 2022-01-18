#include <stdio.h>
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; // 연관 게임 회사
};
typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; // 연관 게임 회사
}GAME_INFO;

int main_struct(void) {
	// [게임 출시]
	// 이름 : 나도게임
	// 발매년도 : 2017 년
	// 가격 : 50원
	// 제작사 : 나도회사

	char* name = "나도게임";
	int year = 2017;
	int price = 50;
	char* company = "나도회사";

	// [또다른 게임 출시]
	// 이름 : 너도게임
	// 발매년도 : 2017 년
	// 가격 : 100원
	// 제작사 : 너도회사

	char* name2 = "너도게임";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "너도회사";

	// 구조체 사용
	struct GameInfo gameinfo1;
	gameinfo1.company = "나도회사";
	gameinfo1.name = "나도게임";
	gameinfo1.year = 2017;
	gameinfo1.price = 50;

	// 구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf("  게임명     : %s\n", gameinfo1.name);
	printf("  발매년도   : %d\n", gameinfo1.year);
	printf("  가격       : %d\n", gameinfo1.price);
	printf("  제작사     : %s\n", gameinfo1.company);

	// 구조체를 배열처럼 초기화
	struct GameInfo gameinfo2 = { "너도게임", 2017, 100, "너도회사" };
	printf("\n\n-- 또다른 게임 출시 정보 --\n");
	printf("  게임명     : %s\n", gameinfo2.name);
	printf("  발매년도   : %d\n", gameinfo2.year);
	printf("  가격       : %d\n", gameinfo2.price);
	printf("  제작사     : %s\n", gameinfo2.company);

	struct GameInfo gameArray[2] = {
		{ "나도게임", 2017, 50, "나도회사" },
		{ "너도게임", 2017, 100, "너도회사" }
	};

	//구조체 포인터
	struct GameInfo* gamePtr; // 게임 포인터
	gamePtr = &gameinfo2;
	/*
	printf("\n\n-- 미션맨의 게임 출시 정보 --\n");
	printf("  게임명     : %s\n", (*gamePtr).name);
	printf("  발매년도   : %d\n", (*gamePtr).year);
	printf("  가격       : %d\n", (*gamePtr).price);
	printf("  제작사     : %s\n", (*gamePtr).company);
	*/
	printf("\n\n-- 미션맨의 게임 출시 정보 --\n");
	printf("  게임명     : %s\n", gamePtr->name);
	printf("  발매년도   : %d\n", gamePtr->year);
	printf("  가격       : %d\n", gamePtr->price);
	printf("  제작사     : %s\n", gamePtr->company);

	gameinfo2.friendGame = &gameinfo1;
	
	printf("\n\n-- 연관업체의 게임 출시 정보 --\n");
	printf("  게임명     : %s\n", gameinfo2.friendGame->name);
	printf("  발매년도   : %d\n", gameinfo2.friendGame->year);
	printf("  가격       : %d\n", gameinfo2.friendGame->price);
	printf("  제작사     : %s\n", gameinfo2.friendGame->company);

	// typedef 
	// 자료형에 별명을 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 j = 50; // int j = 50;
	실수 k = 3.23f; // float k = 3.23f
	
	printf("\n\n정수 : %d,   실수 : %.2f\n", j, k);

	typedef struct GameInfo 게임정보;

	게임정보 game1;
	game1.name = "한글 게임";
	game1.year = 2007;

	GAME_INFO game2;
	game2.name = "한글 게임 2";
	game2.year = 2014;

	struct GameInformation game3;
	return 0;

}