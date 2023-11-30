// 3.4.1 this 포인터 - this 포인터 사용

#include "pch.h"
#include <iostream>
using namespace std;

class CMyData {
public:
    CMyData(int nParam) : m_nData(nParam) { };
    void PrintData() {
        cout << m_nData << endl;

        cout << CMyData::m_nData << endl;

        // 메서드를 호출한 인스턴스의 m_nData 멤버 값을 출력한다.
        cout << this->m_nData << endl;

        // 메서드를 호출한 인스턴스의 CMyData 클래스 멤버 m_nData를 출력한다.
        cout << this->CMyData::m_nData << endl;
    }
private:
    int m_nData;
};

int main() {
    CMyData a(5), b(10);
    a.PrintData();
    b.PrintData();

    return 0;
}