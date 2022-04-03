#include <stdio.h>
#include <string.h>

int main()
{
	wchar_t str[] = L"ABC";
	int size = sizeof(str);
	int len = strlen(str);

	printf("배열의 길이 : %d\n", size);
	printf("문자열 길이 : %d\n", len);

	return 0;
}