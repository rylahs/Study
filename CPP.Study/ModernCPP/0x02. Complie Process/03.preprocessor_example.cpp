#define ABCD 2
#include <iostream>

int main()
{

#ifdef ABCD // ABCD�� define�� �Ǿ���?
    std::cout << "1: yes\n";
#else
    std::cout << "1: no\n";
#endif

#ifndef ABCD // ABCD�� define ���� �ʾҳ�?
    std::cout << "2: no1\n";
#elif ABCD == 2 // ABCD == 2�̳�?
    std::cout << "2: yes\n";
#else
    std::cout << "2: no2\n";
#endif
}