#include<iostream>
using namespace std;

void explainPair(){
    pair<int,int>p={3,5};
    cout<<p.first<<" "<<p.second<<endl;

    //pair<int,pair<int,int>>p={1,{2,6}};
    //cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;

    pair<int,int>arr[]={{1,2},{2,3},{3,4}};
    cout<<arr[1].first<<" "<<arr[2].second;;
}
int main(){
    cout<<"Pair is given below ->"<<endl;
    explainPair();
}