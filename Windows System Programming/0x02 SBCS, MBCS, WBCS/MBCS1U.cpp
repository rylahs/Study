#include <stdio.h>
#include <string.h>

int main()
{
	wchar_t str[] = L"ABC";
	int size = sizeof(str);
	int len = strlen(str);

	printf("�迭�� ���� : %d\n", size);
	printf("���ڿ� ���� : %d\n", len);

	return 0;
}