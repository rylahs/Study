#include <Windows.h>
#include <tchar.h>

#ifdef UNICODE
typedef WCHAR	TCHAR;
typedef LPWSTR	LPTSTR;
typedef LPCWSTR	LPCTSTR;
#else
typedef CHAR	TCHAR;
typedef LPSTR	LPTSTR;
typedef LPCSTR	LPCTSTR;

#endif // UNICODE
