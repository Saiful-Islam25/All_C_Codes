#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x;
    char str[80];
    cout<<"Enter a number and a string : "<<endl;
    cin>>x;
    cin.getline(str,80);
    cout<<"You have entered : "<<endl;
    cout<<x<<endl;
    cout<<str<<endl;
}