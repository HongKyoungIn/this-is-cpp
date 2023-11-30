// 3.4.5 상수형 메서드의 예외사항 - mutable 예약어

#include "pch.h"
#include <iostream>
using namespace std;

class CTest {
public:
    CTest(int nParam) : m_nData(nParam) {
    };
    ~CTest() {
    }
    
    // 상수형 메서드로 선언 및 정의
    int GetData() const {
        // 상수형 메서드라도 mutable 멤버 변수에는 값을 쓸 수 있다.
        m_nData = 20;
        return m_nData;
    }

private:
    mutable int m_nData = 0;
};

int main() {
    CTest a(10);
    cout << a.GetData() << endl;

    return 0;
}