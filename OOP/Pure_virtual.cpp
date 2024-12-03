#include<iostream>
using namespace std;

class Base{
	public:
		virtual void Display1()=0;
		virtual void Display2()=0;
		
		void Display3(){
			cout<<"\nThis is Display3() method of base class";
		}
};
class Derived:public Base{
	public:
		void display1(){
			cout<<"\nThis is Display1() method of Derivbed class";
		}
		void Display2(){
			cout<<"\nThis is Display3{) method of Deriued class";
		}
};
void main(){
	Derived d;
	D.Display1();
	D.Display2();
	D.Display3();
}
