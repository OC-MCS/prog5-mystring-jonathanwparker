
#include "MyString.h";
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	MyString s1;
	MyString s2("Bob");
	MyString s3(s2);
	MyString s4;
	
	cout << "Values of s1, s2, s3 and s4: " << s1 << ", " << s2 << ", " << s3 << ", " << s4 << endl;

	cout << "Value of s4 set to Jill like (s4 = 'Jill') :\n";
	s4 = "Jill";
	cout << s4 << endl << endl;

	cout << "Value of s2 and s3 added together and stored in s1 like (s1 = s2+s3):\n";
	s1 = s2 + s3;
	cout << s1 << endl << endl;

	cout << "all strings set equal to s4 like (s1 = s3 = s2 = s4):\n";
	s1 = s3 = s2 = s4;
	cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl << endl;

	cout << "s1 is set equal to itself to check if any errors occur with memory allocation\n";
	s1 = s1;
	cout << "No Error has occured\n\n";
	cout << "Comparison to check if equal is done like (s1 == s2 && s1==s3 && s1==s4):\n";
	if (s1 == s2 && s1==s3 && s1==s4)
	{
		cout << "All four strings are equal\n";
	}
}