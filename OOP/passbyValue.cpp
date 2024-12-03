#include<iostream>
using namespace std;

void changeValue(int y,int z){
    y=99;
    z=100;
}
int main(){
    int a=55,b=65;
    changeValue(a,b);
    //changeValue(b);
    cout<<"Value of a and b  are : "<<a<<" "<<b<<endl;
}