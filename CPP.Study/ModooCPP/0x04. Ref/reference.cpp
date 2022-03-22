#include <iostream>

int change_value(int* p)
{
	*p = 3;

	return 0;
}

int change_value_ref(int& p)
{
	p = 3;
	return 0;
}

//int& function() {
//	int a = 2;
//	return a;
//}

int& function(int& a) {
	a = 723;
	return a;
}

int function()
{
	int a = 1234;
	return a;
}

int main() {

	// C Style
	int number = 5;
	std::cout << number << std::endl;
	change_value(&number);
	std::cout << number << std::endl;

	int a = 3;
	int& ref_a = a;

	ref_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "ref_a : " << ref_a << std::endl;

	int b = 10;
	std::cout << "b : " << b << std::endl;
	change_value_ref(b);
	std::cout << "b : " << b << std::endl;

	int x;

	int& y = x;
	int& z = y;

	x = 1;

	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
	y = 2;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
	z = 3;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	const int& ref_w = 5;
	int w = ref_w;
	std::cout << "w : " << w << std::endl;
	

	//int k = function();
	//k = 3;
	//std::cout << k << std::endl; // 오류가 나야되지만 최신 비주얼 스튜디오는 실행 가능한듯
	int k = 1;
	int l = function(k);
	std::cout << l << std::endl; // 오류가 나야되지만 최신 비주얼 스튜디오는 실행 가능한듯

	const int& o = function();
}