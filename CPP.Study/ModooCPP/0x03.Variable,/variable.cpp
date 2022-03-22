#include <iostream>
void PrintNum() 
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
	}
}

void PrintSum()
{
	int sum = 0;

	for (int i = 0; i <= 10; i++)
		sum += i;

	std::cout << "Sum : " << sum << std::endl;
}

void UseWhile()
{
	int i = 1, sum = 0;
	while (i <= 10)
	{
		sum += i;
		i++;
	}
	std::cout << "While Loop Method Sum : " << sum << std::endl;
}

void LuckyNumber()
{
	int lucky_number = 3;
	std::cout << "내 비밀 수를 맞추어보세요 ~" << std::endl;

	int user_input; // 사용자 입력

	while (1)
	{
		std::cout << "Input : ";
		std::cin >> user_input;

		if (lucky_number == user_input)
		{
			std::cout << "Correct! Congratulations!!" << std::endl;
			break;
		}
		else
		{
			std::cout << "Incorrect! Press Other Number" << std::endl;
		}
	}
}

void UseSwitch()
{
	int user_input;
	std::cout << "My Info" << std::endl;
	std::cout << "1. Name" << std::endl;
	std::cout << "2. Age" << std::endl;
	std::cout << "3. Gender" << std::endl;
	std::cin >> user_input;

	switch (user_input)
	{
	case 1:
		std::cout << "My Name is Rylah" << std::endl;
		break;

	case 2:
		std::cout << "I'm 99 years old." << std::endl;
		break;

	case 3:
		std::cout << "Male" << std::endl;
		break;

	default:
		std::cout << "Press Other Number" << std::endl;
		break;
	}
}
int main()
{
	int i;
	char c;
	double d;
	float f;
	// https://google.github.io/styleguide/cppguide.html#Variable_Names
	// google Variable Guides


	int arr[10];
	int* parr = arr;
	
	int* pi = &i;

	
	PrintNum();
	std::cout << std::endl;
	PrintSum();
	std::cout << std::endl;
	UseWhile();
	std::cout << std::endl;
	LuckyNumber();
	std::cout << std::endl;
	UseSwitch();


	return 0;
}