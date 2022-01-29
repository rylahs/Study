#include <string>
#include <iostream>
class Base {
protected:
	std::string parent_string;
public:
	Base() : parent_string("기반") { std::cout << "기반 클래스" << std::endl; }

	void what() { std::cout << parent_string << std::endl; }
};

class Derived : public Base {
	std::string child_string;
public:
	Derived() : Base(), child_string("파생") {
		std::cout << "파생 클래스" << std::endl;

		what();
	}

	void what() { std::cout << child_string << std::endl; }
};

int main_base() {
	
	Base p;
	p.what();
	
	Derived c;
	c.what();
	return 0;
}