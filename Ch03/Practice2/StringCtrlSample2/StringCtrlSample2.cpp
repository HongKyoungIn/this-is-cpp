#include "pch.h"
#include "MyString.h"

int main() {
    CMyString strData;
    strData.SetString("Hello");
    cout << strData.GetString() << endl;

    return 0;
}