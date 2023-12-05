#include "pch.h"
#include "MyString.h"

CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0) {
}

CMyString::~CMyString() {
	// ��ü�� �Ҹ��ϱ� ���� �޸𸮸� �����Ѵ�.
	Release();
}

int CMyString::SetString(const char *pszParam) {
	// ���ο� ���ڿ� �Ҵ翡 �ռ� ���� ������ �����Ѵ�.
	Release();

	// NULL�� �μ��� �Լ��� ȣ���ߴٴ� ���� �޸𸮸� �����ϰ�
	// NULL�� �ʱ�ȭ�ϴ� ������ �� �� �ִ�.
	if(pszParam == NULL)
		return 0;

	// ���̰� 0�� ���ڿ��� �ʱ�ȭ�� �ν��ϰ� ó���Ѵ�.
	int nLength = strlen(pszParam);

	if(nLength == 0)
		return 0;

	// ���ڿ��� ���� NULL ���ڸ� ������ �޸𸮸� �Ҵ��Ѵ�.
	m_pszData = new char[nLength + 1];

	// ���� �Ҵ��� �޸𸮿� ���ڿ��� �����Ѵ�.
	strcpy_s(m_pszData, sizeof(char) * (nLength + 1), pszParam);
	m_nLength = nLength;

	// ���ڿ��� ���̸� ��ȯ�Ѵ�.
	return nLength;
}


const char* CMyString::GetString() {
	return m_pszData;
}


void CMyString::Release() {
	// �� �Լ��� ������ ȣ��� ��츦 ������ �ֿ� ����� �ʱ�ȭ�Ѵ�.
	if(m_pszData != NULL)
		delete[] m_pszData;

	m_pszData = NULL;
	m_nLength = 0;
}