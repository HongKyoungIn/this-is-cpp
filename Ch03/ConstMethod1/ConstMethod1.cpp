// 3.4.3 상수형 메서드 - const 예약어로 선언한 상수형 메서드

#include "pch.h"
#include <iostream>
using namespace std;

class CTest {
public:
    CTest(int nParam) : m_nData(nParam) {};
    ~CTest() {};

    // 상수형 메서드로 선언 및 정의
    int GetData() const {
        // 멤버 변수의 값을 읽을 수는 있지만 쓸 수는 없다.
        return m_nData;
    }

    int SetData(int nParam) { 
        m_nData = nParam; 
    }

private:
    int m_nData = 0;
};

int main() {
    CTest a(10);
    cout << a.GetData() << endl;

    return 0;
}

// 상수형 메서드 : 멤버 변수에 읽기 접근은 가능하지만 쓰기는 허용되지 않는 메서드.
