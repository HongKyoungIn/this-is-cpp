// 인라인 함수

#include "pch.h"
#include <iostream>

// 매크로 코드 : 함수 호출로 인한 오버헤드를 줄일 수 있다.
// 하지만 본질적으로 함수가 아니므로 다양한 논리적 오류를 발생시킬 수 있다.
#define ADD(a, b)((a) + (b))

// 일반적인 함수
int Add(int a, int b) {
    return a + b;
}

// 인라인 함수 : 매크로의 장점과 함수의 장점을 두루 갖춘 함수
// 내부적으로 매크로처럼 함수 호출을 하지 않는다.
inline int AddNew(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    scanf_s("%d%d", &a, &b);

    printf("ADD() : %d\n", ADD(a, b));
    printf("Add() : %d\n", Add(a, b));
    printf("AddNew() : %d\n", AddNew(a, b));

    return 0;
}

// 함수를 호출하게 되면 내부적으로 스택 메모리 사용이 증가하고 메모리 복사가 일어난다.
// 제어 흐름도 이동해야 하며 여러 연산들이 일어나게 된다.

// ※ 최적화란?
// 컴파일러가 고급어를 기계어로 번역하는 과정에서 CPU나 메모리 사용의 효율을 높이도록 코드를 변경하는 것.