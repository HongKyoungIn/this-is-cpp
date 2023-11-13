// 2.5.2 상위 블록 범위 - 범위 검색의 확장

#include "pch.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int nInput = 0;

    cout << "11 이상의 정수를 입력하세요 : " << endl;
    cin >> nInput;

    if(nInput > 10) {
        cout << nInput << endl; // 8번째 행의 nInput
    }

    else {
        cout << "Error" << endl;
    }

    return 0;
}