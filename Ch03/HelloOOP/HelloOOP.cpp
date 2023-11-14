// 3.2 클래스 기본 문법 - 클래스를 이용해 객체지양 프로그램으로 변경

#include "pch.h"
#include <iostream>
#include <cstdio>;

// 제작자의 코드
class USERDATA {
public:
    // 멤버 변수 선언
    int nAge;
    char szName[32];

    // 멤버 함수 선언 및 정의
    void Print(void) {
        // nAge와 szName은 Print() 함수의 지역 변수가 아니다!
        // 함수 내부에 선언된 지역변수가 아닌 Print() 함수가 속한 클래스의 멤버 변수
        printf("%d, %s\n", nAge, szName);
    }
};

// 사용자의 코드
int main() {
    USERDATA user = { 10, "철수" };

    user.Print();

    return 0;
}
