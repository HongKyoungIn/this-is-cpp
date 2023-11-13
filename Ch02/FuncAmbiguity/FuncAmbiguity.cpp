// 2.2.2 다중 정의와 모호성

#include "pch.h"
#include <iostream>

void TestFunc(int a) {
    std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b = 10) {
    std::cout << "TestFunc(int, int)" << std::endl;
}

int main() {
    TestFunc(5);

    return 0;
}

// 오류	C2668 : 'TestFunc': 오버로드된 함수에 대한 호출이 모호합니다.
// 위와 같은 다중 정의 상태라면 사용자가 TestFunc(int)를 호출할 수 있는 방법은 없다.