#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int p,q,ans;
        cin>>p>>q;
        if(p==q){
            cout<<"0"<<endl;;
        }else{
            ans++;
        }
            cout<<ans<<endl;
    }
    return 0;
}