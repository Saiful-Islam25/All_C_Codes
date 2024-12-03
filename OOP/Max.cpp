#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    // comparison of integers
    cout << max(2,5) << "\n";
    
    // comparison of floating point numbers
    cout << max(2.2,5.4) << "\n";
    
    // comparison of characters using ASCII values
    cout <<max('x','y') << "\n";
	
    // comparison of strings
    cout << max("abc","abd") << "\n";
    
    //comparison of the same numbers
    // The first number is returned if both numbers are the same
    cout << max(10,10);

    return 0;
}
