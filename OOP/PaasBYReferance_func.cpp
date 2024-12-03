#include<iostream>
using namespace std;

void swap(int &x,int &y){
int temp=x;
x=y;
y=temp;
}
int main(){
	int num1,num2;
	cout<<"Enter the value of num1 and num2: ";
	cin>>num1>>num2;
		
		cout<<"before swapping: "<<endl;
		cout<<num1 <<endl<<num2 <<endl;
		
		swap(num1,num2);
		
		cout<<"After Swapping: "<<endl;
		cout<< num1 <<endl<<num2 <<endl;
		
		return 0;
}
