#include <stdio.h>

int main(void) {
	// 정수형 변수에 대한 예제

	/*
	int age = 12;  // age는 변수 이름, 자료형 정수이기 때문에 int를 활용
	printf("%d\n", age);

	age = 13; // 변할 수 있는 수 : 변수
	printf("%d\n", age);
	//printf("Hello World!\n");
	*/

	//printf("1\n");
	//printf("2\n"); // 2는 범위에서 벗어나므로 주석처리
	//printf("3\n");

	// 실수형 변수에 대한 예제
	/* float f = 46.5f;
	printf("%.2f\n", f); // 소수점 둘째 자리까지 출력
	
	double d = 4.428;
	printf("%.2lf\n", d);
	*/

	// 상수는 한번 정의하면 바꿀 수 없음
	/*
	const int YEAR = 2000; // 상수 정의는 const로 선언해야 됨
	printf("태어난 년도 : %d\n", YEAR);
	*/
	//YEAR = 2001;

	// printf 연산
	//int add = 3 + 7; // 10
	//printf("3 + 7 = %d\n", add);
	//printf("%d x %d = %d\n", 30, 79, 30 * 79);

	//scanf
	// 키보드 입력을 받아서 저장
	/*
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input); // input의 위치에 입력하겠다 & 사용
	printf("입력 값 : %d\n", input);
	*/
	/*
	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d%d%d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);
	*/

	// 문자 (한글자) , 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/
	/*
	char str[256];
	scanf_s("%s", str, sizeof(str)); // 문자열 입력에는 & 표시 안해도 됨 하지만 size를 입력
	printf("%s\n", str);
	*/

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 [조서 작성]
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("이름이 뭐에요? : ");
	scanf_s("%s", name, sizeof(name));
	int age;
	printf("몇살이에요? : ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇kg이에요? : ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇cm이에요? : ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? : ");
	scanf_s("%s", what, sizeof(what));

	// 조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf(" 이름          : %s\n", name);
	printf(" 나이          : %d\n", age);
	printf(" 몸무게        : %.2f\n", weight);
	printf(" 키            : %.2lf\n", height);
	printf(" 범죄          : %s\n", what);


	return 0;
}