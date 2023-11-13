// using 선언

#include "pch.h"
#include <iostream>

// std 네임스페이스를 using 예약어로 선언한다.
using namespace std;

namespace TEST {
    int g_nData = 100;

    void TestFunc(void) {
        // cout에 대해서 범위를 지정하지 않아도 상관없다.
        cout << "TEST::TestFunc()" << endl;
    }
}

using namespace TEST;

int main() {
    // TestFunc()나 g_nData에도 범위를 지정할 필요가 없다.
    TestFunc();
    cout << g_nData << endl;

    return 0;
}