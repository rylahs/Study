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
	Person a("nocope", 31);  // Stack�� �켱���ϰ�

	//Person* ap = new Person();

	std::vector<Person> people; // heap�� �����Ϸ��� vector ��õ
	// ����Ʈ �����͵� ��������

	
}