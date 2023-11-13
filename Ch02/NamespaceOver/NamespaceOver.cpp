// 2.4.4 네임스페이스를 포함한 다중 정의

#include "pch.h"
#include <iostream>
using namespace std;

// 전역(개념상 무소속)
void TestFunc(void) {
    cout << "::TestFunc()" << endl;
}

namespace TEST {
    // TEST 네임스페이스 소속
    void TestFunc(void) {
        cout << "TEST::TestFunc()" << endl;
    }
}

namespace MYDATA {
    // MYDATA 네임스페이스 소속
    void TestFunc(void) {
        cout << "DATA::TestFunc()" << endl;
    }
}

int main() {
    TestFunc(); // 묵시적 전역
    ::TestFunc(); // 명시적 전역
    TEST::TestFunc();
    MYDATA::TestFunc();

    return 0;
}

// C와 C++의 차이
// C++에서는 네임스페이스에 속하지 않은 식별자는 없습니다. 적어도 '전역' 네임스페이스에 속합니다.