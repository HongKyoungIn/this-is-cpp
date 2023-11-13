// 2.2.1 다중 정의 일반

#include "pch.h"
#include <iostream>

int Add(int a, int b, int c) {
    std::cout << "Add(int, int, int) : ";

    return a + b + c;
}

int Add(int a, int b) {
    std::cout << "Add(int, int) : ";

    return a + b;
}

double Add(double a, double b) {
    std::cout << "Add(double, double) : ";

    return a + b;
}

int main()
{
    // 호출되는 함수가 컴파일러에 의해 자동으로 결정된다.
    std::cout << Add(3, 4) << std::endl;
    std::cout << Add(3, 4, 5) << std::endl;
    std::cout << Add(3.3, 4.4) << std::endl;

    return 0;
}

// Name Mangling - 실제 저장되는 함수 이름이 따로 생성된다. 즉, 실제로는 중복되는 함수 이름을 갖지 않는다.
// exturn "C"를 사용하면 Name Mangling 기능을 사용하지 않을 수 있다.