// 3.3 생성자와 소멸자 - 디폴트 생성자의 생략

#include "pch.h"
#include <iostream>
using namespace std;

class CTest {
    int m_nData;

public:
    // 생성자의 매개변수로 전달된 값으로 멤버 변수를 초기화한다.
    CTest(int nParam) : m_nData(nParam) {
        cout << "CTest::CTest()" << endl;
    }

    ~CTest() {
        // 생성할 때 매개변수로 받은 값을 출력한다.
        cout << "~CTest::CTest() " << m_nData << endl;
    }
};

int main() {
    cout << "Begin" << endl;
    CTest a(1);
    cout << "Before b" << endl;
    CTest b(2);
    cout << "End" << endl;

    return 0;
}

// 디폴트 생성자는 생략했으므로 디폴트 값 생성은 허용되지 않습니다.
// CTest a; (X)