#include <iostream>
class Cat {
public:
	Cat()
	{
		m_age = 1;
	};
	void addAge(int arg)
	{
		m_age += arg;
	}
private:
	int m_age;
};
 
class Dog {
public:
	Dog()
	{
		m_age = 1;
	};
	void addAge(int arg)
	{
		m_age += arg;
	}
private:
	int m_age;
};

void foo(int arg)
{
	int a;
	int b;

}

void bar()
{
	Cat cat;
	Dog dog;
}
int main() {
	int a;
	double b;

	foo(10);
	bar();

	return 0;
}
