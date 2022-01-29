#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
int main(void)
{
	int count; // 메모리 크기
	printf("할당할 메모리 크기: ");
	scanf_s("%d", &count);
	//메모리 할당
	int* p = (int*)malloc(sizeof(int) * count);
	if (p != NULL) {
		// Heap 공간에 배열처럼 메모리 할당
		memset(p, 0, count * sizeof(int));
		for (int i = 0; i < count; i++)
		{
			printf("%d ", p[i]);
		}
		printf("\n");
		for (int i = 0; i < count; i++)
		{
			if (p != NULL) {
				printf("%d번째 입력 숫자 : ", i + 1);
				scanf_s("%d", p + i); // &p[i]
			}
		}
		int sum = 0;
		for (int i = 0; i < count; i++)
		{
			sum += p[i]; // *(p + i)
	
		}
		printf("합계 : %d\n", sum);
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
	
	// 메모리 할당
	int* p = NULL;
	int count = 0; // 메모리 크기
	printf("할당할 메모리 크기: ");
	scanf_s("%d", &count);

	// heap(힙) 공간에 배열처럼 메모리 공간이 할당
	p = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++) {
		printf("%d번째 입력 숫자: ", i + 1);
		scanf_s("%d", p + i); // &p[i]
	}

	int hap = 0;
	for (int i = 0; i < count; i++) {
		hap += *(p + i);
	}
	printf("입력 받은 수의 합: %d\n", hap);

	free(p); // 할당된 메모리 해제
	p = NULL;
}
}

*/