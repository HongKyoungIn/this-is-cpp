﻿// 함수 템플릿으로 만든 Add() 함수

#include "pch.h"
#include <iostream>

template <typename T>
T Add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << Add(3, 4) << std::endl;
    std::cout << Add(3.3, 4.4) << std::endl;

    return 0;
}