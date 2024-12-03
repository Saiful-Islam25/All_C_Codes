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

    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>a){
            count++;
            
        }
    }
    cout<<count<<endl;
    return 0;
}