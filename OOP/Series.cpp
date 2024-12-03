#include<iostream>
#include<cmath>
using namespace std;

int main(){
float i,n,sum,k;
	cout<<"Enter the last number: ";
	cin>>n;
	sum=0;
	for(i=0;i<=n;i++){
		k=pow(1/i,i);
		sum=sum+k;
	}
	cout<<"the sum of the series is: "<<sum<<endl;
	
	return 0;	
}

