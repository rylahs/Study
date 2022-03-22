#include <iostream>

typedef struct Animal {
	char name[30];
	int age;

	int health;
	int food;
	int clean;
}Animal;

void create_animal(Animal* animal)
{
	std::cout << "Animal's name? : ";
	std::cin >> animal->name;
	
	std::cout << "Animal's age? : ";
	std::cin >> animal->age;

	animal->health = 100;
	animal->food = 100;
	animal->clean = 100;
}

void play(Animal* animal)
{
	animal->health += 10;
	animal->food -= 20;
	animal->clean -= 30;
}

void one_day_pass(Animal* animal)
{
	animal->health -= 10;
	animal->food -= 30;
	animal->clean -= 20;
}

void show_stat(Animal* animal)
{
	std::cout << animal->name << "ÀÇ »óÅÂ" << std::endl;
	std::cout << "Health : " << animal->health << std::endl;
	std::cout << "Food : " << animal->food << std::endl;
	std::cout << "Clean : " << animal->clean << std::endl;
	
}

int main(void)
{
	Animal* list[10];
	int animal_num = 0;

	while (1)
	{
		std::cout << "1. Add Animal" << std::endl;
		std::cout << "2. Play" << std::endl;
		std::cout << "3. Status" << std::endl;

		int input;
		std::cin >> input;

		switch (input)
		{
			int play_with;
		case 1:
			list[animal_num] = new Animal; // Init
			create_animal(list[animal_num]); // Create

			animal_num++; // Num++
			break;

		case 2:
			std::cout << "´©±¸¶û? : ";
			std::cin >> play_with;

			if (play_with < animal_num)
				play(list[play_with]);
			break;
		case 3:
			std::cout << "´©±¸²¬? : ";
			std::cin >> play_with;
			
			if (play_with < animal_num)
				show_stat(list[play_with]);
			break;

		}

		for (int i = 0; i != animal_num; i++)
			one_day_pass(list[i]);
	}

	for (int i = 0; i != animal_num; i++)
		delete list[i];
	return 0;
}