// C++ program to demonstrate functioning of substr()
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string s = "dog:cat";
	int pos = s.find("o");
	string sub = s.substr(pos + 1);
	cout << "String is: " << sub;

	return 0;
}
