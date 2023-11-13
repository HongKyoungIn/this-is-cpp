// 2.5.4 using 선언과 전역 변수 - using namespace 선언을 적용하기 전

#include "pch.h"
#include <iostream>
using namespace std;

int nData = 100;

namespace TEST {
    int nData = 200;
}

int main() {
    cout << nData << endl;

    return 0;
}