#include <stdio.h>
// ���ȭ : �ʿ��� ��ɵ��� �Լ����� ����
void title_a()
{
	printf("----------------------------\n");
	printf("������ ���� v1.0\n");
	printf("----------------------------\n");
}
void calc() {
	int num1, num2;
	char calcCh;
	printf("����� ���ڸ� �Է����ּ���\n");
	printf("���� 1 �Է� : ");
	scanf_s("%d", &num1);
	printf("���� 2 �Է� : ");
	scanf_s("%d", &num2);
	printf("����� ������ �Է����ּ���(+, -, *, /) : ");
	scanf_s(" %c", &calcCh, sizeof(char));
	switch (calcCh)
	{
	case '+':
		printf("%d + %d = %d", num1, num2, num1 + num2);
		break;
	case '-':
		printf("%d - %d = %d", num1, num2, num1 + num2);
		break;
	case '*':
		printf("%d * %d = %d", num1, num2, num1 * num2);
		break;
	case '/':
		printf("%d / %d = %d", num1, num2, num1 / num2);
		break;
	default:
		printf("�߸��� ���ڰ� �ԷµǾ����ϴ�.\n");
	}
}


int main_ex1(void)
{

	title_a();

	calc();
	//int num1, num2;
	//char calcCh;
	
	
	//calc2(num1, num2, calcCh);
	//2���� ���ڿ� 1���� ����(+, -, *, /)�� �Է¹޾Ƽ�
	//����ϴ� ���� ���α׷�
	// 1��° ���·� �۾� void �Լ�
	
	return 0;
}