// 함수 프로그래밍
#include <stdio.h>
void grade1()
{
	printf("1학년 수강신청 안내\n");
	printf("전공: 3학점\n");
	printf("수강신청을 처리합니다.\n");
}
void grade2()
{
	printf("2학년 수강신청 안내\n");
	printf("전공: 6학점\n");
	printf("수강신청을 처리합니다.\n");
}
void grade3()
{
	printf("3학년 수강신청 안내\n");
	printf("전공:  9학점\n");
	printf("수강신청을 처리합니다.\n");
}
void grade4()
{
	printf("4학년 수강신청 안내\n");
	printf("전공: 15학점\n");
	printf("수강신청을 처리합니다.\n");
}
int main()
{
	// 함수 포인터
	void(*funcPtr[4])(); // 함수 포인터 변수 선언(생성)
	funcPtr[0] = grade1;
	funcPtr[1] = grade2;
	funcPtr[2] = grade3;
	funcPtr[3] = grade4;

	int grade;
	printf("수강 신청 => 학년을 입력하세요(1 ~ 4 학년) : ");
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
		printf("잘못된 값이 입력되었습니다. \n");
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


*/