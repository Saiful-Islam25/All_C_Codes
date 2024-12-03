#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char key[25];
    // char key[] = "mango";
    cout << "Enter your favourite fruit : ";
    cin.getline(key, 25);
    char buffer[50];
    do
    {
        cout << "What is my favourite fruit? ";
        cin >> buffer;
    } while (strcmp(key, buffer) != 0);
    cout << "Answer is correct!!" << endl;
    return 0;
}