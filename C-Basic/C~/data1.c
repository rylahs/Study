#include <stdio.h>

int main(void) {

	// 변수 : 정보를 저장하는 공간의 이름표(위치 정보)
	// int(Integer) : 정수
	/// double(Double) : 실수
	// char(Character) : 문자
	// char*(Character Pointer) : 문자열
	// 숫자(정수 정보를 변수에 저장

	int num = 100;//정수 변수 선언(생성)
	num = 200; // 이미 만들어진 변수에 대해 새로운 값을 부여
	printf("정수 : %d, %d\n", num, 100); 

	double dNum = 10.2; // 실수 변수 선언
	printf("실수 : %.2lf\n", dNum);

	char ch = 'A'; // 문자 변수 선언
	//char ch = 'B'; // 동일한 이름의 변수선언이므로 에러 발생
	printf("문자 출력 : %c\n", ch);

	char* str = "홍길동"; // 문자열 정보를 ptr 포인터 변수에 연결
	printf("문자열 출력 : %s\n", str);

	const char* str1 = "홍길동"; // 문자열 정보를 ptr 포인터 변수에 연결
	printf("문자열 출력 : %s\n", str1);

	//상수 변수 : 값을 정하면 변경이 불가능
	const int num2 = 1000;
	// num2 = 2000; //const로 생성해서 변경 할 수 없다.
	printf("Num2 : %d\n", num2);
	return 0;

}