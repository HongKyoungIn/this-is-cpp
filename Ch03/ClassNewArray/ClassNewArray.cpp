// 3.3.1 동적 객체의 생성과 소멸 - new와 delete 연산자 사용

#include "pch.h"
#include <iostream>
using namespace std;

class CTest {
    int m_nData;

public:
    CTest() {
        cout << "CTest::CTest()" << endl;
    }

    ~CTest() {
        cout << "~CTest::CTest()" << endl;
    }
};

int main() {
    cout << "Begin" << endl;

    // 배열로 new 연산을 수행할 수 있다.
    CTest *pData = new CTest[3];

    // 배열로 생성한 것은 반드시 배열로 삭제한다!
    delete [] pData;
    cout << "End" << endl;

    return 0;
}

// 만약 배열로 생성한 객체를 배열로 삭제하지 않는다면 첫 번째 요소 하나만 남고 나머지는 그대로 남아있는다.
// 이 문제로 인해 메모리 릭(leak, 누수) 버그를 만든다.