#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
int main(void)
{
	int count; // �޸� ũ��
	printf("�Ҵ��� �޸� ũ��: ");
	scanf_s("%d", &count);
	//�޸� �Ҵ�
	int* p = (int*)malloc(sizeof(int) * count);
	if (p != NULL) {
		// Heap ������ �迭ó�� �޸� �Ҵ�
		memset(p, 0, count * sizeof(int));
		for (int i = 0; i < count; i++)
		{
			printf("%d ", p[i]);
		}
		printf("\n");
		for (int i = 0; i < count; i++)
		{
			if (p != NULL) {
				printf("%d��° �Է� ���� : ", i + 1);
				scanf_s("%d", p + i); // &p[i]
			}
		}
		int sum = 0;
		for (int i = 0; i < count; i++)
		{
			sum += p[i]; // *(p + i)
	
		}
		printf("�հ� : %d\n", sum);
	}

	free(p);


	return 0;
}
/*
* #include <stdio.h>
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
}

*/