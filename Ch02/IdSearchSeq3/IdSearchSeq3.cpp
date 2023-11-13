// 2.5.3 가장 최근에 선언된 전역 변수 - 네임스페이스와 저역 변수의 검색 우선권

#include "pch.h"
#include <iostream>
using namespace std;

int nData = 200;

namespace TEST {
    int nData = 100;
    void TestFunc(void) {
        cout << nData << endl;
    }
}

int main() {
    TEST::TestFunc();
    
    return 0;
}