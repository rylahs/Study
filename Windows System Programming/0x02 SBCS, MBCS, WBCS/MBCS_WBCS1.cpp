#define UNICODE
#define _UNICODE
#include <stdio.h>
#include <Windows.h>
#include <tchar.h>

int wmain()
{
	TCHAR str[] = _T("1234567");
	int size = sizeof(str);
	printf("string length : %d \n", size);
	return 0;
}