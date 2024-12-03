#include<iostream>
using namespace std;

void changeValue(int &y,int &z){
    y=99;
    z=100;
}
int main(){
    int a=55;
    int b=65;
    changeValue(a,b);
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of a is : "<<b<<endl;

    return 0;
}