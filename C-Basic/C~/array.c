#include <stdio.h>

int main_array(void) {
	// �迭 : ������ Ÿ���� ������ �ټ��� ������ �����ϴ� ���ӵ� ����
	// ���� �迭 : ���ڸ� ����
	// ���� �迭 : ���ڸ� ����

	// �⺻���� �迭 ����
	int arrNum[4]; //Integer�� 1���� �迭
	int arr1[100]; // ���̰� 100�� int Ÿ���� 1���� �迭 arr1
	double arr2[10]; // ���̰� 10�� double Ÿ���� 1���� �迭 arr2
	char arr3[5]; // ���̰� 5�� char�� 1���� �迭

	arrNum[0] = 10; // �迭 arrNum�� [0]��° �ּҿ� 10�� ����
	arrNum[1] = 20;
	arrNum[2] = 30;
	arrNum[3] = 40;
	for (int i = 0; i < 4; i++)
		printf("arrNum[%d]�� �� : %d\n", i, arrNum[i]);
	printf("\n");

	for (int i = 0; i < 100; i++) {
		arr1[i] = i + 1; // 1���� 100���� �迭�� ����
		printf("arr1[%d]�� �迭 �� : %d\n", i, arr1[i]);
	}

	// �迭 ����� �ʱ�ȭ
	int arr4[5] = { 1, 2, 3, 4, 5 };
	// arr4�� 4��°(index : 3) ��ġ�� �� ���
	printf("arr4[%d] = %d\n", 3, arr4[3]);

	for (int i = 0; i < 5; i++) {
		printf("arr4[%d] : %d\n", i, arr4[i]);
	}

	// �ʱⰪ : ������(����)���� �߻��ϴ� ���� ���� ���ؼ� ���
	// ���ʴ�� 1, 2�� ����ǰ� ������ �� ������ 0���� ä����.
	int arr5[10] = { 1, 2 };
	int arr6[10] = { 0, };

	char str1[6] = { 'H', 'E', 'L', 'L', 'O', '\0'};
	char str2[5] = { 'H', 'E', 'L', 'L', 'O'};
	// C���� ���ڿ��� �������� ������ '\0' NULL ���� �ٴ´�.
	char str[14] = "Good Morning!";
	char* pstr = "Good Evening!";

	printf("%s\n", str);
	printf("%s\n", str1);
	printf("%s\n", str2); // ������ �� 
	printf("%s\n", pstr);

	return 0;
}