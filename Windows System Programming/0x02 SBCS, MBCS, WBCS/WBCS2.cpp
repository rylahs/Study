#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
	wchar_t str[] = L"ABC";
	int size = sizeof(str);
	int len = wcslen(str);
	_wsetlocale(LC_ALL, L"korean"); // 
	wprintf(L"Array Size : %d\n", size);
	wprintf(L"String Length : %d\n", len);
	wprintf(L"�ѱ� ��� �׽�Ʈ\n");
	return 0;
}