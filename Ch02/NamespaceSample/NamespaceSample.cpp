// 네임스페이스 선언 및 정의

// 네임스페이스 : C++이 지원하는 각종 요소들(변수, 함수, 클래스 등)을 한 범주로 묶어주기 위한 문법
#include "pch.h"
#include <iostream>

namespace TEST {
    int g_nData = 100;

    void TestFunc(void) {
        std::cout << "TEST::TestFunc()" << std::endl;
    }
}

int main() {
    TEST::TestFunc(); // ::은 범위지정 연산자이다.
    std::cout << TEST::g_nData << std::endl;

    return 0;
}