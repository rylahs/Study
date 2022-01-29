// P208~ 220 Example.c
#include <stdio.h>

// P212 SimpleAddFunc.c : AddFunc && P214 SmartAddFunc.c - Add Function
int Add(int num1, int num2) { // ���� ���� (O), ��ȯ ��� (O), int
	return num1 + num2;
}
// P214 SmartAddFunc.c : AddShowResult Func - Print Function
void AddShowResult(int num) { // ���� ���� (O), ��ȯ ��� (X) , void
	printf("���� ��� ��� : %d\n", num);
}
// P214 SmartAddFunc.c : ReadNum Func - Input Function
int ReadNum() { // ���� ���� (X), ��ȯ ���(O)
	int num;
	scanf_s("%d", &num);
	return num;
} 

// P214 SmartAddFunc.c : ReadNum Func - Init Print Function
void HowToUseThisProg(void) { // �������� (X), ��ȯ ��� (X)
	printf("�� ���� ������ �Է��ϸ� ���� ����� ��µ˴ϴ�.\n");
	printf("��! �׷��� �� ���� ������ �Է��ϼ���\n");
}

// P218 NumCompare.c : NumberCompare - Number Compare Function
int NumberCompare(int num1, int num2); // �Լ� ����

// P219 AbsoCompare.c : AbsoCompare - Absolute Number Compare Function
int AbsoCompare(int num1, int num2); // �Լ� ����
// P219 AbsoCompare.c : GetAbsoValue - Get Absolute Number Function
int GetAbsoValue(int num); // �Լ� ����

int main(void) {
	// P209 PrinfOutput.c
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d %d \n", num1, num2);
	printf("\n\n");
	// P212 SimpleAddFunc.c
	int result;
	result = Add(3, 4);
	printf("Add Result : %d\n", result);
	result = Add(5, 8);
	printf("Add Result : %d\n", result);

	//P214 SmartAddFunc.c
	printf("\n\n");
	int result2, num3, num4;
	HowToUseThisProg();
	num3 = ReadNum();
	num4 = ReadNum();
	result2 = Add(num3, num4);
	AddShowResult(result2);
	printf("\n\n");
	//P218 NumCompare.c
	printf("3�� 4 �߿��� ū ���� %d�̴�.\n", NumberCompare(3, 4));
	printf("7�� 2 �߿��� ū ���� %d�̴�.\n", NumberCompare(7, 2));
	printf("\n\n");

	//P129 AbsoCompare.c
	int num5, num6;
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num5, &num6);

	printf("%d�� %d�� ���밪�� ū ���� : %d\n", num5, num6, AbsoCompare(num5, num6));

	return 0;
}

// P218 NumCompare.c : NumberCompare - Number Compare Function
int NumberCompare(int num1, int num2) { // �Լ� ����
	if (num1 > num2)
		return num1;
	else
		return num2;
}

// P219 AbsoCompare.c : AbsoCompare - Absolute Number Compare Function
int AbsoCompare(int num1, int num2) {
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1; // num1�� ���밪�� �� ũ�ٸ� num1 ��ȯ
	else
		return num2; // �ƴ϶�� num2 ��ȯ
}

// P219 AbsoCompare.c : GetAbsoValue - Get Absolute Number Function
int GetAbsoValue(int num) { // �Լ� ����
	if (num < 0) // �������
		return num * (-1); // -1�� ���� ���� ��ȯ
	else
		return num; // �ƴ϶�� �״�θ� ��ȯ
}