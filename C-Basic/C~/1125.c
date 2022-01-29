#include <stdio.h>

int main_1125if(void) {

	int num = 100; // 정수형 변수 num 선언 및 초기화

	if (num >= 100) {// num이 100 이상이라면 
		//if 조건이 "참 인 경우에 만 실행
		printf("num이 100이상 입니다.\n");
	}

	if (num != 99) // 한줄일 경우 중괄호 생략
		printf("num이 99와 같지 않다\n");

	if (num == 99) {
		printf("num가 99와 같다\n");
		printf("메인 프로그램 종료\n");
	}

	num = 120;
	if (num == 120) {
		printf("num은 120과 같다.\n");
	}
	else {
		printf("num은 120과 다르다.\n");
	}

	num = 200;
	if (num >= 50 && num <= 150) // 50 ~ 150
		printf("50과 150 사이의 값이다. \n");
	else
		printf("num은 50보다 작거나 150보다 큰 값\n");

	num = 100;
	if (num >= 10 || num <= 90) // 10 ~ 90
		printf("10 이상이거나 90 이하의 값. \n");
	else
		printf("num은 10보다 작거나 90보다 큰 값 : 실행 안됨\n");

	num = 80;
	if (num == 100)
		printf("num가 100과 같다. \n");
	else if (num == 90)
		printf("num가 90과 같다.\n");
	else if (num == 80)
		printf("num가 80과 같다.\n");
	else if (num == 70)
		printf("num가 70과 같다.\n");
	else if (num == 60)
		printf("num가 60과 같다.\n");
	else
		printf("알수 없는 값이다.\n");



	return 0;
}