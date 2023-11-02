#include "pch.h"
#include <iostream>
#include <string>
#include <cstdio>

int main()
{
    int nAge;
    std::cout << "나이를 입력하시오." << std::endl;
    std::cin >> nAge;

    char szJob[32];
    std::cout << "직업을 입력하세요." << std::endl;
    std::cin >> szJob;

    // C와 달리 코드 중간에 아무 곳에서나 변수를 선언할 수 있다.
    std::string strName;
    std::cout << "이름을 입력하세요." << std::endl;
    std::cin >> strName;

    std::cout << "당신의 이름은 " << strName << "이고, "
        << "나이는 " << nAge << "살이며, "
        << "직업은 " << szJob << "입니다." << std::endl;
}