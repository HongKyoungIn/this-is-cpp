// 2.4.3 네임스페이스의 중첩

#include "pch.h"
#include <iostream>
using namespace std;

namespace TEST {
    int g_nData = 100;
    namespace DEV {
        int g_nData = 200;
        namespace WIN {
            int g_nData = 300;
        }
    }
}

int main() {
    cout << TEST::g_nData << endl;
    cout << TEST::DEV::g_nData << endl;
    cout << TEST::DEV::WIN::g_nData << endl;

    return 0;
}