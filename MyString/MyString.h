#pragma once
// MyString class declaration goes here
#include <iostream>
using namespace std;
class MyString;
ostream &operator<<(ostream& strm, MyString& s1);
class MyString
{
private:
	char* str;
public:
	MyString();
	MyString(const char[]);
	MyString(const MyString&);

	~MyString();

	MyString operator=(const MyString&);
	MyString operator+(const MyString&);
	bool operator==(const MyString&);
	const char* get_str();
};
