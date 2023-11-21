// 3.3.4 명시적 디폴트 생성자 - 디폴트 생성자의 정의를 클래스 외부로 분리

#include "pch.h"
#include <iostream>
using namespace std;

class CTest {
public:
    // 디폴트 생성자 선언
    // CTest(void); // 매개변수가 없는 생성자
    CTest(void) = default;
    int m_nData = 5;
};

// 클래스 외부에서 디폴트 생성자 정의
// CTest::CTest(void) {}

int main() {
    CTest a;
    cout << a.m_nData << endl;

    return 0;
}