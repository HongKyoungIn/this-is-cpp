#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int aList[5] = { 10, 20, 30, 40, 50 };

	// 전형적인 C 스타일 반복문
	for(int i = 0; i < 5; ++i) {
		cout << aList[i] << ' ';
	}

	cout << endl;

	// 범위 기반 C++11 스타일 반복문
	// 각 요소의 값을 n에 복사한다.

	for(auto n : aList) { // 전체 요소에 접근, 읽기만 가능
		cout << n << ' ';
	}

	cout << endl;

	// n은 각 요소에 대한 참조다.
	for(auto &n : aList) { // 쓰기도 가능
		cout << n << ' ';
	}

	cout << endl;

	return 0;
}