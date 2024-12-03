// C++ program to demonstrate functioning of substr()
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string s1;
    cout<<"Enter your string : ";
    getline(cin,s1);

	string r = s1.substr(3, 7);
	cout << "String is: " << r;

	return 0;
}
