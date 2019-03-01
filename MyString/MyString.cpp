#include "MyString.h"
#include <cstring>
using namespace std;
MyString::MyString()
{
	int num = 5;
	str = new char[num];
	strcpy_s(str, num, "null");
}

MyString::MyString(const char ptr[])
{
	str = new char[strlen(ptr) + 1];
	strcpy_s(str, strlen(ptr) + 1, ptr);
}

MyString::MyString(const MyString& s1)
{
	str = new char[strlen(s1.str) + 1];
	strcpy_s(str, strlen(s1.str) + 1, s1.str);
}

MyString::~MyString()
{
	delete[] str;
}

MyString MyString::operator=(const MyString& s1)
{
	if (this != &s1)
	{
		delete[] str;
		str = new char[strlen(s1.str) + 1];
		strcpy_s(str, strlen(s1.str) + 1, s1.str);
	}
	return *this;
}

MyString MyString::operator+(const MyString& s1)
{
	MyString tempStr;
	delete[] tempStr.str;
	tempStr.str = new char[strlen(str) + strlen(s1.str) + 2];
	strcpy_s(tempStr.str, strlen(str) + strlen(s1.str) + 2, str);
	strcat_s(tempStr.str, strlen(str) + strlen(s1.str) + 2, " ");
	strcat_s(tempStr.str, strlen(str) + strlen(s1.str) + 2, s1.str);
	return tempStr;
}

bool MyString::operator==(const MyString& s1)
{
	bool areEqual=true;
	strcmp(str, s1.str);
	return areEqual;
}

const char* MyString::get_str()
{
	const char* tempStr = str;
	return tempStr;
}

ostream &operator<<(ostream& strm, MyString& s1)
{
	strm << s1.get_str();
	return strm;
}