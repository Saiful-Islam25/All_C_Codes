#include<iostream>
using namespace std;
void print(int n){
	if(n==1){
		cout<<n<<endl;
		print(n-1);
	}
}
int main(){
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	print(n);
	
	return 0;
}

