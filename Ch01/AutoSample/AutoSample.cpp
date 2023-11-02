#include "pch.h"
#include <iostream>

int main()
{
    int a = 10;
    int b(a);
    auto c(b);

    int a1(100);
    int b1(a1);
    auto c1(b1);

    std::cout << a + b + c << std::endl;

    std::cout << a1 + b1 + c1 << std::endl;

    return 0;
}

// auto : 초깃값의 형식에 맞춰 선언하는 인스턴스의 형식이 '자동'으로 결정된다.