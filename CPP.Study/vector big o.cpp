#include <vector>
#include <iostream>
class Cat
{
public:
	Cat(std::string name, int age) :mName{ std::move(name) }, mAge{ age } {}
	void speak() const
	{
		std::cout << "meow~" << mName << mAge << std::endl;
	}
private:
	std::string mName;
	int mAge;
};
int main_big0()
{
	std::vector<Cat> cats;
	//cats.emplace_back(Cat{ "cat0", 0 });
	//cats.emplace_back(Cat{ "cat1", 1 });
	cats.emplace_back("cat0", 0 );
	cats.emplace_back("cat1", 1 );
	cats.emplace_back("kitty", 2); 
	Cat& cat = cats.emplace_back("kitty", 3); // C++17 에서 가능
	Cat nabi{ "nabi", 4 };
	cats.emplace_back(nabi); // L value

	for (const auto& cat : cats)
	{
		cat.speak();
	}
	/*
	std::vector<int> nums(100, 1);
	nums.emplace_back(2);
	nums.pop_back();

	nums.emplace(nums.begin(), 3);
	nums.erase(nums.begin());
	for (std::size_t idx = 0; idx < nums.size(); idx++) {
		std::cout << idx << " : " << nums[idx] << std::endl;
	}*/
	return 0;
}