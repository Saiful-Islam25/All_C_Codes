#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>v,v2;
v.push_back(1);
v.push_back(23);
v.push_back(11);
v.push_back(43);
v.push_back(28);

v.push_back(11);
v.push_back(3);
v.push_back(19);
v.push_back(63);
v.push_back(85);

cout<<"Before sorting : "<<endl;
for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}
cout<<endl<<endl;

sort(v.begin(),v.end());

cout<<"After Sorting : "<<endl;
for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}
cout<<endl;

return 0;

}
