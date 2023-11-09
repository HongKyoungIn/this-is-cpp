// 매개변수가 두 개일 때의 디폴트 값

#include "pch.h"
#include <iostream>

int TestFunc(int nParam1, int nParam2 = 2) {
	return nParam1 * nParam2;
}

int TestFunc1(int nParam1 = 5, int nParam2) {
	return nParam1 * nParam2;
}



int main() {
	// 호출자가 설정하는 실인수는 피호출자 함수 매개변수의 왼쪽부터 짝을 맞춘다.
	std::cout << TestFunc(10) << std::endl;
	std::cout << TestFunc(10, 5) << std::endl;

	/* 1. 피호출자 함수 매개변수의 디폴트 값은 반드시 오른쪽 매개변수부터 기술해야 한다.
	std::cout << TestFunc1(10) << std::endl; 
	TestFunc1 : 매개 개변수 2에 대한 기본 인수가 없습니다. 
	TestFunc1 : TestFunc1 함수는 1개의 매개변수를 사용하지 않습니다.
	*/

	// 2. 매개변수가 여러 개일 때 왼쪽 첫 번째 매개변수의 디폴트 값을 기술하려면 
	// 나머지 오른쪽 '모든' 매개변수에 대한 디폴트 값을 기술해야 한다.
	// 절대로 중간에 빼먹으면 안 된다!
	int TestFunc(int nParam1 = 5, int nParam2, int nParam3 = 10); // 오류발생

	// 3. 호출자 함수가 피호출자 함수 매개변수의 실인수를 기술하면 이는 왼쪽부터 짝을 맞추어 적용되며,
	// 짝이 맞지 않는 매개변수는 디폴트 값을 적용한다.
	return 0;
}