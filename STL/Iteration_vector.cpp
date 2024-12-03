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


vector<int>::iterator it;
//it=v.begin()+3;
//cout<<*it<<endl;

for(it=v.begin();it!=v.end();it++){
	cout<<*it<<" ";
}
cout<<endl;

return 0;

}
