#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s,int start,int end){
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        end--;
        start++;
    }
    return true;
}
void solve(string s,int ind,vector<string>&temp,vector<vector<string> >&ans){
        if(ind==s.length()){
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(palindrome(s,ind,i)){
                temp.push_back(s.substr(ind,i-ind+1));
                solve(s,i+1,temp,ans);
                temp.pop_back();
            }
        }
}
int main(){
    string s="aabacaq";
    vector<vector<string>>ans;
    vector<string>temp;
    int ind=0;
    solve(s,ind,temp,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}