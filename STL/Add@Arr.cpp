#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int res[n];

    for(int i=0;i<n;i++){
        res[i]=arr1[i]+arr2[i];
    }
    for(int i=0;i<3;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}