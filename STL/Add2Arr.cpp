#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int res[n];
     
    transform(arr1,arr1+n,arr2,res,plus<int>());

    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}