// 3.2.1 멤버 선언 및 정의 - 멤버 변수 초기화를 위한 생성자 함수 사용

#include "pch.h"
#include <iostream>
using namespace std;

// 제작자 코드
class CTest {
public:
    // CTest 클래스의 '생성자 함수' 선언 및 정의
    CTest() {
        m_nData = 10;
    }

    // 멤버 데이터 선언
    int m_nData;

    // 멤버 함수 선언 및 정의
    void PrintData(void) {
        // 멤버 데이터에 접근하고 값을 출력한다.
        cout << m_nData << endl;
    }
};

// 사용자 코드
int main() {
    CTest t;
    t.PrintData();

    return 0;

}

// 생성자를 이용하는 함수의 특징
// 1. 반환 자료형이 없다.
// 2. 호출하는 함수가 아니라 적절한 시기에 내부에서 자동으로 호출되는 함수다.