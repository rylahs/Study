#include <vector>
#include <iostream>

class Catt
{
public:
	explicit Catt(int age) :mAge{ age } {}
	void speak() const
	{
		std::cout << "meow~" << mAge << std::endl;
	}
private:
	int mAge;
};


int main_intro()
{
	int* numsPtr = new int[5];
	for (int i = 0; i < 5; i++)
	{
		numsPtr[i] = i;
	}

	delete numsPtr;

	std::vector<int> nums(5);
	for (int i = 0; i < 5; i++)
	{
		nums[i] = i;
	}
	std::vector<int> numa{ 0,1,2,3,4 };
	std::cout << numa.size() << std::endl;
	numa.emplace_back(5);
	std::cout << numa.size() << std::endl;
	numa.pop_back();
	std::cout << numa.size() << std::endl;
	numa.emplace_back(1435);
	for (std::size_t idx = 0; idx < numa.size(); idx++)
	{
		std::cout << numa[idx] << std::endl;
	}

	for (auto itr = numa.begin(); itr != numa.end(); itr++)
	{
		std::cout << (*itr) << std::endl;
	}
	//ranged for
	for (const int& num : numa) {
		std::cout << num << std::endl;
	}

	std::vector<Catt> catss;
	catss.emplace_back(Catt(1));
	catss.emplace_back(Catt(2));
	catss.emplace_back(Catt(3));
	catss.emplace_back(Catt(4));

	for (const auto& cat : catss) {
		cat.speak();
	}
	return 0;

}