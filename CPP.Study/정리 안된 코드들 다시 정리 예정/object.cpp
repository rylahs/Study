#include <iostream>
#include <vector>
class Person
{
public:
	Person(std::string name, int age)
		:name(std::move(name)), age(age) {};
private:
	std::string name;
	int age;
};

int main(void)
{
	Person a("nocope", 31);  // Stack에 우선시하고

	//Person* ap = new Person();

	std::vector<Person> people; // heap에 생성하려면 vector 추천
	// 스마트 포인터도 괜찮ㅇ므

	
}