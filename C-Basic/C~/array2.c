#include <stdio.h>

int main_array2(void) {

	// 1 ~ 10������ ���ڸ� �����ϰ� 5��°�� 10��° ���� ���
	int arr1[10];

	for (int i = 0; i < 10; i++) {
		arr1[i] = i + 1;
		if (i % 5 == 4)
			printf("%d\n", arr1[i]);
	}

	// �ʱⰪ ��� �ÿ� ũ�� ���� ����
	// 1���� �迭�� �հ� ���
	int arr2[] = { 20, 30, 40, 50, 60, 70 };
	int sumArr2 = 0, avgArr2 = 0;
	for (int i = 0; i < 6; i++) {
		sumArr2 += arr2[i];
		printf("Arr2[%d] : %d\n", i, arr2[i]);
	}
	avgArr2 = sumArr2 / 6;
	printf("Arr2 Sum : %d\n", sumArr2);
	printf("Arr2 Avg : %d\n", avgArr2);


	// 1 ~ 100������ ���� �迭�� �����ϰ� 6�� ����� ���
	int arr3[100] = { 0, };
	for (int i = 0; i < 100; i++) {
		arr3[i] = i + 1;
		if (arr3[i] % 6 == 0) {
			printf("%d ", arr3[i]);
		}
	}
	printf("\n");
	return 0;
}