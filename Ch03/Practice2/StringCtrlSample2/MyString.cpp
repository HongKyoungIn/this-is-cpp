#include "pch.h"
#include "MyString.h"

CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{

}

CMyString::~CMyString() {

}

int CMyString::SetString(const char *pszParam) {
	return 0;
}

// 코드조각 참고 https://learn.microsoft.com/ko-kr/visualstudio/ide/visual-cpp-code-snippets?view=vs-2022

const char *CMyString::GetString() {
	// TODO: 여기에 구현 코드 추가.
	return nullptr;
}


void CMyString::Release() {
	// TODO: 여기에 구현 코드 추가.
}
