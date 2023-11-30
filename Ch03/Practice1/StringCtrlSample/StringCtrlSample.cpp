#include "pch.h"
#include <iostream>
#include "MyString.h"

int main() {
    CMyString strData;
    strData.SetString("Hello");
    cout << strData.GetString() << endl;

    return 0;
}