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

// �ڵ����� ���� https://learn.microsoft.com/ko-kr/visualstudio/ide/visual-cpp-code-snippets?view=vs-2022

const char *CMyString::GetString() {
	// TODO: ���⿡ ���� �ڵ� �߰�.
	return nullptr;
}


void CMyString::Release() {
	// TODO: ���⿡ ���� �ڵ� �߰�.
}
