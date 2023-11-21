// 3.3 생성자와 소멸자 초기화 결과 TEST
#include "pch.h"
#include <iostream>
using namespace std;

class CTest {
public:
    CTest() 
        : m_nData(0) {
        cout << "CTest()" << endl;
        cout << m_nData << endl;
        m_nData = 1;
        cout << m_nData << endl;
    }

    int m_nData = 2;

    ~CTest() {
        cout << "~CTest::CTest()" << endl;
    }
};

int main() {
    cout << "Begin" << endl;
    CTest a;
    cout << a.m_nData << endl;
    cout << "End" << endl;

    return 0;
}