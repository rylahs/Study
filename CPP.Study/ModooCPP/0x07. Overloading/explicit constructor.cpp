#include <iostream>

class Test {
public:
	Test() = default;
	int x;
	int y;
};

int main()
{
	Test t = Test();
	std::cout << t.x << t.y << std::endl;
}