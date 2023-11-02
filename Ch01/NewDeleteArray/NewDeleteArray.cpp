﻿// 배열 형태의 객체 생성

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    // 객체를 배열 형태로 동적 생성한다.
    int *arr = new int[5];
    
    for(int i = 0; i < 5; ++i) {
        arr[i] = (i + 1) * 10;
    }

    for(int i = 0; i < 5; ++i) {
        cout << arr[i] << endl;
    }

    // 배열 형태로 생성한 대상은 반드시 배열 형태를 통해 삭제한다!
    delete[] arr;

    return 0;
}

// new 연산자는 객체의 생성자를 호출하고, delete 연산자는 객체의 소멸자를 호출한다.