#define ABCD 2
#include <iostream>

int main()
{

#ifdef ABCD // ABCD가 define이 되었나?
    std::cout << "1: yes\n";
#else
    std::cout << "1: no\n";
#endif

#ifndef ABCD // ABCD가 define 되지 않았나?
    std::cout << "2: no1\n";
#elif ABCD == 2 // ABCD == 2이나?
    std::cout << "2: yes\n";
#else
    std::cout << "2: no2\n";
#endif
}