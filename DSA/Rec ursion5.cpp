#include<iostream>
using namespace std;

int Digit(int n,string arr[]){
    if(n==0)
     return ;

     int digit=n%10;
     n=n/10;

     Digit(n,arr);
     cout<<arr[digit]<<" ";

}
int main(){
    string arr[10]={"zero","one","two","three",
                    "four","five","six","seven",
                    "eight","nine"};
    int n;
    cin>>n;
    cout<<"\n\n\n\n";
    Digit(n,arr);
    //cout<<"\n\n\n\n";

}