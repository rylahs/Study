// 모호한 오버로딩
#include <iostream>

void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "double : " << x << std::endl; }

int main() {
	int a = 1;
	char b = 'c';
	double c = 3.2;

	print(a);
	print(b);
	// print(c); // error C2668 : 'print' : 오버로드된 함수에 대한 호출이 모호합니다.

	// 1. double 일치 없음
	// 2. double 형변해도 없음
	// 
	// Char, unsigned char, short 는 int 로 변환된다.
	// Unsigned short 는 int 의 크기에 따라 int 혹은 unsigned int 로 변환된다.
	//	Float 은 double 로 변환된다.
	//	Enum 은 int 로 변환된다.
	// 
	// 3. 포괄적인 형변환
	// 임의의 숫자(numeric) 타입은 다른 숫자 타입으로 변환된다. (예를 들어 float -> int)
	// Enum 도 임의의 숫자 타입으로 변환된다(예를 들어 Enum -> double)
	//	0 은 포인터 타입이나 숫자 타입으로 변환된 0 은 포인터 타입이나 숫자 타입으로 변환된다
	//	포인터는 void 포인터로 변환된다.
	
	// 여기서 double을 int나 char로 둘다 볼수 있기 때문에 모호해진다.

	return 0;
}