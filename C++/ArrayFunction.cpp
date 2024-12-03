#include<iostream>
using namespace std;
void arrFunc(int arr[5]){
    for(int i=0;i<5;i++){
        cout<<"The Number is : "<<arr[i]<<"\n";
    }
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    arrFunc(arr);
    return 0;
}