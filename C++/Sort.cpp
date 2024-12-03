#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    bool sort=true;
    for(int i=1;i<6;i++){
        if(arr[i]<=arr[i-1]){
            sort=false;
        }
    }
    cout<<sort<<endl;
    return 0;
}