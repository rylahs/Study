#include "04.cat.h"
#include <iostream>
//void Cat::bye()
static void bye()
{
	std::cout << "bye~" << std::endl;
}
void Cat::speak()
{
	std::cout << "meow~" << std::endl;
	std::cout << "i'm " << age << std::endl;
	bye();
}
