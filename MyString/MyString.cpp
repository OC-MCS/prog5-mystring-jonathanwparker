/*
===================================
Programming II
Assignment #5 - MyString Class
Jonathan Parker
2/19/2019
===================================
*/


#include "MyString.h"
#include <cstring>
using namespace std;

/* Constructor Overview
======================================
Description:
	Stores "null" or another inputted char string into a dynamically allocated char string
Prerequisites:
	Overload #1 = takes a constant char string
	Overload #2 = takes another MyString and uses its pointer
======================================
*/
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

/* Destructor Overview
======================================
Description:
	Deletes dynamically allocated memory from str
======================================
*/
MyString::~MyString()
{
	delete[] str;
}

/* = Operator Overview
======================================
Description:
	stores one MyString's data into another MyString
Prerequisites:
	const MyString s1 = the MyString on the right side of the = sign.
Return:
	What was stored in s1 to what is on the left of the equal sign
======================================
*/
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

/* + Operator Overview
======================================
Description:
	Cacatonates two MyStrings together
Prerequisites:
	const MyString s1 = the MyString on the right side of the + sign.
Return:
	returns cacatonated string
======================================
*/
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

/* == Operator Overview
======================================
Description:
	compares two MyStrings to see if they are equal
Prerequisites:
	const MyString s1 = the MyString on the right side of the == sign.
======================================
*/
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