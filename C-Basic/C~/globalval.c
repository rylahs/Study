#include <stdio.h>
int Add(int val);
int num = 1; 
void SimpleFunc()
{
	static int num1 = 0;
	int num2 = 0;
	num1++;
	num2++;
	printf("static: %d, local : %d \n", num1, num2);
}
int main(void) {
	int num = 5;
	printf("num : %d\n", Add(3));
	printf("num : %d\n", num + 9);

	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();

	return 0;
}

int Add(int val) {
	int num = 9;
	num += val;
	return num;
}