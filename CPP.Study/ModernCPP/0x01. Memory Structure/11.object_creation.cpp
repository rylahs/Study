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
	Person a("nocope", 31); // Stack에 우선시

	// Person * ap = new Person(); // Heap 
	// delete ap;
	std::vector<Person> people; // Heap use smartpointer STL vector
}
