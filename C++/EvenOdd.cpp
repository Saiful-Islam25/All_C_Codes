#include<bits/stdc++.h>
using namespace std;
void Sort(vector<int>&v){
    int left=0;
    int right=v.size()-1;

    while(left<right){
        if(v[left]%2==1 && v[right%2==0]){
            swap(v[left],v[right]);
            left++;
            right--;
        }
        if(v[left]%2==0){
            left++;
        }
        if(v[right]%2==1){
            right--;
        }
    }
    return;
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

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;

}