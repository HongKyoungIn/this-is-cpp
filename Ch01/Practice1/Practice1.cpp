//1. 자신의 이름과 나이를 입력받고 "나의 이름은 홍길동이고 나이는 20살 입니다." 를 출력하는 프로그램을 작성하시오.

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
    string name;
    int age;

    cin >> name >> age;

    cout << "나의 이름은 " << name << "이고 나이는 " << age << "살 입니다.";

    return 0;
}