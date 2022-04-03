#include <stdio.h>

int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
		fputws(argv[i], stdout);

	return 0;
}