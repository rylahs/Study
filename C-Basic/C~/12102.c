// �Լ� ���α׷���
#include <stdio.h>
void grade1()
{
	printf("1�г� ������û �ȳ�\n");
	printf("����: 3����\n");
	printf("������û�� ó���մϴ�.\n");
}
void grade2()
{
	printf("2�г� ������û �ȳ�\n");
	printf("����: 6����\n");
	printf("������û�� ó���մϴ�.\n");
}
void grade3()
{
	printf("3�г� ������û �ȳ�\n");
	printf("����:  9����\n");
	printf("������û�� ó���մϴ�.\n");
}
void grade4()
{
	printf("4�г� ������û �ȳ�\n");
	printf("����: 15����\n");
	printf("������û�� ó���մϴ�.\n");
}
int main()
{
	// �Լ� ������
	void(*funcPtr[4])(); // �Լ� ������ ���� ����(����)
	funcPtr[0] = grade1;
	funcPtr[1] = grade2;
	funcPtr[2] = grade3;
	funcPtr[3] = grade4;

	int grade;
	printf("���� ��û => �г��� �Է��ϼ���(1 ~ 4 �г�) : ");
	scanf_s("%d", &grade);
	switch (grade - 1)
	{
	case 0:
		funcPtr[0]();
		break;
	case 1:
		funcPtr[1]();
		break;
	case 2:
		funcPtr[2]();
		break;
	case 3:
		funcPtr[3]();
		break;
	default:
		printf("�߸��� ���� �ԷµǾ����ϴ�. \n");
		break;
	}


	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = { 1, 2, 3, 4};

	// �޸� �Ҵ�
	int* p = NULL;
	int count = 0; // �޸� ũ��
	printf("�Ҵ��� �޸� ũ��: ");
	scanf_s("%d", &count);

	// heap(��) ������ �迭ó�� �޸� ������ �Ҵ�
	p = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++) {
		printf("%d��° �Է� ����: ", i + 1);
		scanf_s("%d", p + i); // &p[i]
	}

	int hap = 0;
	for (int i = 0; i < count; i++) {
		hap += *(p + i);
	}
	printf("�Է� ���� ���� ��: %d\n", hap);

	free(p); // �Ҵ�� �޸� ����
	p = NULL;
}


*/