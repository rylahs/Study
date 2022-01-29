#include <algorithm>
#include <iostream>
#include <limits>
constexpr int ABCD = 2;
int main()
{
	//std::cout << MAX_UINT16 << std::endl;
	//std::cout << MAX(10, 100) << std::endl;
	std::cout << std::numeric_limits<uint16_t>::max() << std::endl;
	std::cout << std::max(10, 100) << std::endl;

	if constexpr (ABCD)
	{
		std::cout << "1:Yes\n";
	}
	else
	{
		std::cout << "1:No\n";
	}
}