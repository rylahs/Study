#include <stdio.h> // ǥ�� ����� �Լ� printf, scanf
#include <stdlib.h> // ǥ�� ���̺귯�� srand
#include <time.h> // �ð� �Լ� time
// �迭 �Ű������� ����Ͽ� Ȧ,¦ ����
void checkOdd(int arr[]) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) { // 2�� ���� �������� 0�̸�
			printf("%d: ¦��\n", arr[i]);
		}
		else {
			printf("%d: Ȧ��\n", arr[i]);
		}
	}
}


int main()
{
	// NULL : �������� ����
	int arr[10] = { 0, };
	srand(time(0)); // �������� �̱����ؼ� �õ尪 ����

	for (int i = 0; i < 10; i++) {
		int num = (rand() % 100) + 1; // 1 ~ 100
		arr[i] = num;
		printf("%d ", num);
	}
	printf("\n");
	checkOdd(arr);
}
