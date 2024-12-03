#include<iostream>
using namespace std;
class sample{
int a,b;
public:
	void setvalue(){
		cout<<"Enter the value of a & b: "<<endl;
		cin>>a>>b;
	}
	friend float mean(sample s);

};
	
float mean(sample s){
	return (s.a+s.b)/2.0;
}

int main(){
	sample s;
	s.setvalue();
	cout<<"Mean Value: "<<mean(s)<<endl;
return 0;
}
