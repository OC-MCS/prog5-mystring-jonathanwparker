#pragma once
/*
===================================
Programming II
Assignment #5 - MyString Class
Jonathan Parker
2/19/2019
===================================
*/
#include <iostream>
using namespace std;
//Class Prototype
class MyString;

//<< Operator Prototype
ostream &operator<<(ostream& strm, MyString& s1);

// MyString Class
class MyString
{
private:
	/* Variable Declarations
	str = pointer to a char string
	*/
	char* str;
public:
	// Constructor Prototypes
	MyString();
	MyString(const char[]);
	MyString(const MyString&);

	//Destructor Prototypes
	~MyString();

	//Operator Prototypes
	MyString operator=(const MyString&);
	MyString operator+(const MyString&);
	bool operator==(const MyString&);

	//Getter Function prototype
	const char* get_str();
};
