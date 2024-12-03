#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    cin.ignore();
    
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);

        if(s.compare("yes")==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}