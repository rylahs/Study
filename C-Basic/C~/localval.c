#include <stdio.h>
// 실습 09-02 ~ 09-04 
// 
// LocalVariable.c
void SimpleFuncOne(void)
{
	int num = 10;
	num++;
	printf("SimpleFuncOne num : %d\n", num);
	return 0; // SimpleFuncOne의 마지막 문장
}

void SimpleFuncTwo(void)
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("SimpleFuncTwo num1 & num2 : %d %d\n", num1, num2);

	return 0; // SimpleFuncOne의 마지막 문장
}
int main_local (void)
{
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num : %d\n\n\n", num);
	int count;
	for (count = 0; count < 3; count++)
	{
		int num3 = 0;
		num3++;
		printf("%d번 반복, 지역변수 num3은 %d \n", count + 1, num3);
	}
	if (count == 3)
	{
		int num3 = 7;
		num3++;
		printf("if문 내의 지역변수 num3은 %d \n", num3);
	}
	printf("\n\n");

	int num4 = 1;
	if (num4 == 1)
	{
		int num4 = 7; // 주석처리하면 둘다 11
		num4 += 10; // 안하면 17 1
		printf("if문 내의 지역변수 num4 :  %d \n", num4);
	}
	printf("main 함수 내의 지역 변수 num4 : %d \n", num4);


	return 0;
}