#include<bits/stdc++.h>
using namespace std;
void Sort(vector<int>&v){
    vector<int>ans;
    int left=0;
    int right=v.size()-1;
    while(left<=right){
        if(abs(v[left])<abs(v[right])){
            ans.push_back(v[right]*v[right]);
            right--;
        }
        else{
            ans.push_back(v[left]*v[left]);
            left++;
      }
    }
    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    Sort(v);

    return 0;
}