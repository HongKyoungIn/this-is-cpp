// 지역변수의 선언 위치 변경

#include "pch.h"
#include <iostream>
using namespace std;

int nData = 200;

namespace TEST {
    void TestFunc(void) {
        cout << nData << endl; // 실행 당시 선언되어있는 전역변수 200이 출력
    }
    int nData = 100;
}

int main() {
    TEST::TestFunc();

    return 0;
}