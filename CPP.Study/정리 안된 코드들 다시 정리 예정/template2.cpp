#include <iostream>

//int add(int a, int b)
//{
//	return a + b;
//}
//double add(double a, double b)
//{
//	return a + b;
//}
//
//float add(float a, float b)
//{
//	return a + b;
//}

template<typename T>
T add(T a,T b) {
	return a + b;
}
int main()
{
	int a = add<int>(1, 1);
	double b = add<double>(2.5, 5.1);
	// auto c = add("abc", "dfdf");


	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	return 0;
}
