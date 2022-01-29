#include <stdio.h>

// 동전교환기 프로그램
// 동전 투입 금액 : ?
//-------------------------------------------
//    동전 교환 프로그램 v1.0
//-------------------------------------------
//500원 동전 갯수 : ?개
//100원 동전 개수 : ?개
// 50원 동전 개수 : ?개
// 10원 동전 개수 : ?개
//  1원 동전 개수 : ?개

int main(void) {
	int inputCoin;
	int count_500 = 0, count_100 = 0, count_50 = 0, count_10 = 0, count_1 = 0;

	printf("동전 투입 금액(1000원 이상) : ");
	scanf_s("%d", &inputCoin);
	if (inputCoin < 1000) { // 다시 입력하게 하려면 반복문 필요
		printf("1000원 미만입니다. 동전을 다시 넣어주세요.\n");
		return 0;
	}
	printf("-----------------------------------------------------------\n");
	printf("\t\t동전 교환 프로그램 v 1.0\n");
	printf("-----------------------------------------------------------\n");
	printf("\t**가치가 큰 동전부터 교환됩니다.\n");
	
	count_500 = inputCoin / 500;
	printf("500원 동전 개수\t\t : %d개\n", count_500);
	inputCoin %= 500;

	count_100 = inputCoin / 100;
	printf("100원 동전 개수\t\t : %d개\n", count_100);
	inputCoin %= 100;
	
	count_50 = inputCoin / 50;
	printf(" 50원 동전 개수\t\t : %d개\n", count_50);
	inputCoin %= 50;

	count_10 = inputCoin / 10;
	printf(" 10원 동전 개수\t\t : %d개\n", count_10);
	inputCoin %= 10;

	printf("  1원 동전 개수\t\t : %d개\n\n", inputCoin);
	printf("-----------------------------------------------------------\n");
	printf("\t\t프로그램 종료 !\n");
	printf("-----------------------------------------------------------\n");
	return 0;
}