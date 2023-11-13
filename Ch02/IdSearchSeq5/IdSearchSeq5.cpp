// 2.5.4 using 선언과 전역 변수 - TEST 네임스페이스에 using 선언 추가

#include "pch.h"
#include <iostream>
using namespace std;

int nData = 100;

namespace TEST {
    int nData = 200;
}

using namespace TEST;

int main() {
    cout << nData << endl;

    return 0;
}

// 오류 : nData가 모호합니다.