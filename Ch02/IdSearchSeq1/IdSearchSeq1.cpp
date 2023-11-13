// 2.5.1 현재 블록 범위 - 식별자에 접근하는 코드가 속한 블록 범위

#include "pch.h"
#include <iostream>
using namespace std;

int nData(20);

int main(int argc, char *argv[]) {
    int nData(10);

    cout << nData << endl; // 현재 속한 지역변수인 10을 출력
    cout << argc << endl;

    return 0;
}