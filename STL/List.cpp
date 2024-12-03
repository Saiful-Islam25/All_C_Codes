#include<bits/stdc++.h>
using namespace std;

int main(){
	
	list<int>li;
	
	li.push_back(1);
	li.push_back(2);
	li.push_back(5);
	
	list<int>::iterator it;
	
	for(auto it : li)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	return 0;
}
