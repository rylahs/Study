#include <stdio.h>

int NumberCompare_2345(int n1, int n2) {
	if (n1 > n2)
		return n1;
	else
		return n2;
}

int main_230423(void) {

	printf("3과 4 중에서 큰 수는 %d이다.", NumberCompare_2345(3, 4));
	return 0;
}
