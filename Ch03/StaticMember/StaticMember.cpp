﻿// 3.5 정적 멤버 - static 예약어를 사용한 정적 멤버 선언 및 정의

#include "pch.h"
#include <iostream>
using namespace std;

class CTest {
public:
    CTest(int nParam) : m_nData(nParam) {
        m_nCount++;
    }

    int GetData() {
        return m_nData;
    }

    void ResetCount() {
        m_nCount = 0;
    }

    // 정적 메서드 선언 및 정의
    static int GetCount() {
        return m_nCount;
    }

private:
    int m_nData;

    // 정적 멤버 변수 선언
    static int m_nCount;
};

// CTest 클래스의 정적 멤버 변수 정의
int CTest::m_nCount = 0;

int main() {
    CTest a(5), b(10);

    // 정적 멤버에 접근
    cout << a.GetCount() << endl;
    b.ResetCount();

    // 정적 멤버에 접근, 인스턴스 없이도 접근 가능!
    cout << CTest::GetCount() << endl;

    return 0;
}