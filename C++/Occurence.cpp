#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter the value of a :";
    int a;
    cin>>a;
    int occ=0;
    for(int ele:v){
        if(ele==a){
            occ++;
        }

    }
    cout<<occ<<endl;
    return 0;
}