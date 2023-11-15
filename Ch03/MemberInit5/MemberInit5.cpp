// 3.2.1 멤버 선언 및 정의 - C++의 멤버 변수 초기화

#include "pch.h"
#include <iostream>
using namespace std;

// 제작자 코드
class CTest {
public:
    // 생성자 초기화 목록을 이용한 멤버 초기화
    CTest() {}

    // C++ 11부터 선언과 동시에 멤버 변수를 초기화 할 수 있다!
    int m_nData1 = 10;
    int m_nData2 = 20;

    void PrintData(void) {
        cout << m_nData1 << endl;
        cout << m_nData2 << endl;
    }
};

// 사용자 코드
int main() {
    CTest t;

    t.PrintData();

    return 0;
}