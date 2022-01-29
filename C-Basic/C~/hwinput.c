
#include <stdio.h>

int main_hwinputver() {
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
	printf("성적을 입력합니다. 입력해주세요(국어, 영어, 수학) : ");
	scanf_s("%d%d%d", &han, &eng, &math);

	printf("------------성적표------------\n");
	printf("국어 : %d, 영어 : %d, 수학 : %d\n", han, eng, math);
	printf("성적의 합 : %d점\n평균 성적 : %.1lf점\n", sum, avg);



	char name[70];
	printf("Input String : ");
	scanf_s("%69s", name, 70*sizeof(char));
	printf("String : %s\n", name);

	return 0;
}