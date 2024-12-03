#include <iostream>
using namespace std;

int fib(int x) {
  if(x==0 || x==1){
    return 1;
  }
  else{
    return fib(x-1)+fib(x-2);
  }
}

int main() {
 int x,i=0;
 cout<<"Enter the number of terms of series : ";
 cin>>x;
 cout<<"Fibonacci Series : ";
 while(i<x){
    cout<<" "<<fib(i);
    i++;
 }
   return 0;
}