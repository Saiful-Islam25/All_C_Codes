#include<iostream>
#include<algorithm>
using namespace std;

int multiply(int x,int y){
    return x*y;
}
int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10]={54,21,32,65,58,74,21,84,20,35};
    int res[10];

    transform(arr1,arr1+10,arr2,res,multiply);
    for(int i=0;i<10;i++){
        cout<<res[i]<<endl;
    }
}