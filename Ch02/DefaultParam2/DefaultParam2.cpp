// 디폴트 매개변수 사용 예시

#include "pch.h"
#include <iostream>

int TestFunc(int = 10);

int TestFunc(int nParam) {
    return nParam;
}

int main() {
    // 호출자가 실인수를 기술하지 않았으므로 디폴트 값을 적용한다.
    std::cout << TestFunc() << std::endl;

    // 호출자가 실인수를 확정했으므로 디폴트 값을 무시한다.
    std::cout << TestFunc(20) << std::endl;

    return 0;
}