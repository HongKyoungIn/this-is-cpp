﻿// 1.5 메모리 동적 할당

#include "pch.h"
#include <iostream>

int main()
{
	// 인스턴스만 동적으로 생성하는 경우
	int *pData = new int;
	
	// 초깃값을 기술하는 경우
	int *pNewData = new int(10);

	*pData = 5;
	std::cout << *pData << std::endl;
	std::cout << *pNewData << std::endl;

	delete pData;
	delete pNewData;
}