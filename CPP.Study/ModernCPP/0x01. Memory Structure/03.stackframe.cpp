// https://minteul.tistory.com/361
 
#include <iostream>
int foo(int arg)
{
	int a = 0;
	int b = 1;
	int d = arg + a + b;
	return d;
}

int main()
{
	int a;
	double b;
	bool c;
	int d = foo(1);
	return 0;
}
