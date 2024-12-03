#include<iostream>
using namespace std;

unsigned int fact(unsigned int n){
    if(n==0)
     return 1;
     return n*fact(n-1);

}
int main(){
    int num;
    cout<<" Enter a number : ";
    cin>>num;
    cout<<" Factorial of : "<<num<<" is "<<fact(num)<<endl;

return 0;
}