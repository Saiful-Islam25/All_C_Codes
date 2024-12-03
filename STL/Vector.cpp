#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>v;
v.push_back(1);
v.push_back(23);
v.push_back(11);
v.push_back(43);
v.push_back(28);
v.pop_back();

//v.clear();

for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}
cout<<endl;

cout<<v.size()<<endl;
cout<<v.front()<<endl;
cout<<v.back()<<endl;


v.insert(v.begin()+2,3,5);

for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}
cout<<endl;

if(v.empty())
cout<<"Empty!"<<endl;
else
cout<<"Not Empty!"<<endl;


return 0;
}

