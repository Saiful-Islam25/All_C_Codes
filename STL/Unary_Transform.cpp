#include<iostream>
#include<algorithm>
using namespace std;

int square(int x){
    return x*x;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int res[10];
    transform(arr,arr+10,res,square);
    for(int i=0;i<10;i++){
        cout<<res[i]<<endl;
    }

}