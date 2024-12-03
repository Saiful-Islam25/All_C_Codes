#include<iostream>
using namespace std;

int multiply(int num1,int num2);
int multiply(float num1,float num2);

int main(){
	int ans1=multiply(5,3);
	float ans2=multiply(4.5,5);
	
	cout<<"Answer 1 is : "<<ans1<<endl;
	cout<<"Answer 2 is : "<<ans2<<endl;
	return 0;
	
}
