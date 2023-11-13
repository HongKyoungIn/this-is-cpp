// 2.2.3 함수 템플릿
// 템플릿은 일종의 '틀'이며 마치 판화의 틀을 만들어 여러 장의 판화를 인쇄하는 것과 같다.

#include "pch.h"
#include <iostream>

template <typename T>
T TestFunc(T a) {
    std::cout << "매개변수 a : " << std::endl;

    return a;
}

int main() {

    // 호출자가 어떤 실 인수로 TestFunc() 함수를 호출하는가에 따라 자동으로 다중 정의가 이루어진다.
    // 즉, 사용자 코드에 의해 컴파일러가 다중 정의 코드를 만든다.
    std::cout << "int\t" << TestFunc(3) << std::endl;
    std::cout << "double\t" << TestFunc(3.3) << std::endl;
    std::cout << "char\t" << TestFunc('A') << std::endl;
    std::cout << "char*\t" << TestFunc("TestString") << std::endl;
    
    return 0;
}