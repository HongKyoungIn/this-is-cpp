// 3.3 생성자와 소멸자 - 호출 순서
#include "pch.h"
#include <iostream>
using namespace std;

class CTest {
public:
    CTest() {
        cout << "CTest::CTest()" << endl;
    }

    ~CTest() {
        cout << "~CTest::CTest()" << endl;
    }
};

CTest a;

int main() {
    cout << "Begin" << endl;
    cout << "End" << endl;

    return 0;
}

// 1. main() 함수가 호출되기 전에 생성자가 호출될 수 있다.
// 2. 생성자는 다중 정의할 수 있다.
// 3. 소멸자는 다중 정의할 수 없다.
// 4. main() 함수가 끝난 후에 소멸자가 호출될 수 있다.
// 5. 생성자와 소멸자는 새엵할 수 있으나 생략할 경우 컴파일러가 알아서 만들어 넣는다.