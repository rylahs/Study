
// 문제 
// 사칙연산자 : 덧셈(+) , 뺄셈(-), 곱셈(*), 나눗셈(/)
// 1. PI를 저장하는 실수 상수 변수 생성
// 2. 원의 반지름 실수 변수(값은 아무거나 설정)
// 3. 원의 면적 (PI * r ^ 2)
// 
// 문제2
// 국어 영어 수학 변수 선언(생성) -> 값은 아무거나 적용
// 총점 , 평균 변수들을 생성하고 출력 (56~57)

#include <stdio.h>

int main(void) {
	const double PI = 3.14159265358979323846; //상수 변수는 대문자 사용
	double r;

	printf("반지름을 입력하세요 : ");
	scanf_s("%lf", &r);
	double area = r * r * PI;
	printf("원의 면적은 %.5lf 입니다.\n", area);

	int han, eng, math;
	han = 90, eng = 95, math = 99;
	int sum = han + eng + math;
	double avg = sum / 3;
	printf("------------성적표------------\n");
	printf("국어 : %d, 영어 : %d, 수학 : %d\n", han, eng, math);
	printf("성적의 합 : %d점\n평균 성적 : %.1lf점\n", sum, avg);
	return 0;

}
