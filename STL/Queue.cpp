#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int>q;
	q.push(1);
	q.push(3);
	q.push(5);
	
	while(q.size()>0){
		cout<<q.front()<<" ";
		q.pop();
	}
	
	
	
return 0;
}
