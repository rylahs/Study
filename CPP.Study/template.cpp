#include <algorithm>
#include <vector>
#include <iostream>
class Cat {

};
int main_t1()
{
	std::vector<int> ints;
	std::vector<double> doubles;
	std::vector<Cat> cats;
	int maxI = std::max<int>(1, 5);
	float maxf = std::max<float>(1.2f, 2.5f);
	double maxd = std::max<double>(1.4, 3.4);

	std::cout << maxI << std::endl;
	std::cout << maxf << std::endl;
	std::cout << maxd << std::endl;

}