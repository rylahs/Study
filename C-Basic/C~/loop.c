#include <stdio.h>

int main_loop1 (void) {
	// 1. for
	// 2. while
	// 3. do-while
	// for (���۰�; ����; ���� �Ǵ� ����)

#pragma region for��
	printf("for�� ����\n");
	for (int i = 0; i < 5; i++)
		printf("�ݺ��� �׽�Ʈ : %d\n", i);
	
	printf("\nfor�� ����\n");
	for (int i = 5; i > 0; i--)
		printf("�ݺ��� �׽�Ʈ : %d\n", i);
	printf("\n");
#pragma endregion 
#pragma region While
	// while (����) -> ������ ���� ���� �ݺ� ����
	int num = 0; // ���� ��
	while (num < 5) // ����
	{
		printf("while�� ���� : %d\n", num++);
	}
	printf("---------------------\n");
	num = 5;
	while (num > 0)
	{
		printf("while�� ���� : %d\n", num--);
	}
#pragma endregion
#pragma region Do-While
	// do-while
	int loopnum = 0;
	printf("\n");
	do {
		printf("do-while �ݺ� : %d\n", loopnum++);
		

	} while (loopnum < 5);
#pragma endregion


	return 0;
}