#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>v,v2;
v.push_back(1);
v.push_back(23);
v.push_back(11);
v.push_back(43);
v.push_back(28);

v2.push_back(11);
v2.push_back(3);
v2.push_back(19);
v2.push_back(43);
v2.push_back(85);

cout<<"Before Swapping : "<<endl;
for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}
cout<<endl;

for(int i=0;i<v2.size();i++){
	cout<<v2[i]<<" ";
}
cout<<endl;

swap(v,v2);
cout<<"After Swapping : "<<endl;
for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}
cout<<endl;

for(int i=0;i<v2.size();i++){
	cout<<v2[i]<<" ";
}
cout<<endl;


}
