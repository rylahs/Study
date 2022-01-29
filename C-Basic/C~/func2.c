#include <stdio.h>

void func2(int num)
{
	printf("함수 유형 2번째-> 매개변수 값 : %d\n", num);
}
// 나이를 출력 하는 함수
void funcAge(int age)
{
	printf("나이 정보 : %d\n", age);
}
// 이름을 출력하는 함수
void funcName(char* name)
{
	printf("이름 : %s\n", name);
}
// 몸무게를 출력하는 함수
void funcWeight(double weight)
{
	printf("몸무게 : %.2lf", weight);
}
void showAll(char* name, int age, double weight)
{
	printf("이름   : %s\n", name);
	printf("나이   : %d\n", age);
	printf("몸무게 : %.1lf\n", weight);
}
int main_fnc2() {
	// 매개변수(인수, 인자, 파라미터)
	// -> 함수()안에 들어가는 변수
	// 2. void 함수(메쏘드)명(매개변수)

	func2(100); // func2 함수를 호출(사용)
	funcName((char*)("홍길동"));
	funcAge(100); // funcAge 함수 호출
	funcWeight(71.5);
	printf("\n\n");
	showAll((char*)"홍길동", 100, 71.5);
	return 0;
}
