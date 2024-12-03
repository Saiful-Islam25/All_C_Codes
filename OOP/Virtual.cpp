#include<iostream>
using namespace std;

class Polygon{
	public:
		virtual void area(){
			cout<<"Area of polygon"<<endl;
		}
};
class Rectangle:public Polygon{
	public:
		void area(){
			cout<<"Area of rectangle"<<endl;
		}
};
class Triangle:public Polygon{
	public:
		void area(){
			cout<<"Area of triangle"<<endl;
		}
};
int main(){
	Polygon *p1=new Polygon;
	Polygon *p2=new Rectangle;
	Polygon *p3=new Triangle;
	
	p1->area();
	p2->area();
	p3->area();
return 0;	
}
