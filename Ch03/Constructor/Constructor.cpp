// 3.3 생성자와 소멸자
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

int main() {
    cout << "Begin" << endl;
    CTest a;
    cout << "End" << endl;

    return 0;
}

// 생성자와 소멸자 : 클래스 객체가 생성 및 소멸될 때 '자동으로' 호출되는 함수이다.
// 1. 함수임에도 불구하고 '반환 형식이 없다.'
// 2. 함수 이름이 클래스 이름과 같다.
// 3. 생성자는 다중 정의 할 수 있고 소멸자는 그럴 수 없다.

// 디폴트 생성자 : 매개변수가 하나도 없는 생성자
// 1. 클래스 제작자가 디폴트 생성자와 소멸자를 기술하지 않아도 컴파일러가 알아서 만들어 넣는다.