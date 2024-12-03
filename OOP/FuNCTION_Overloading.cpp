#include<iostream>
using namespace std;

class shapes{
    int height,length,width;
    int radius,h;
    int c;
    public:

    shapes(int height,int length,int width);
    shapes(int radius,int h);
    shapes(int c);

};
shapes::shapes(int height,int length,int width){
    cout<<"The volume of rectangle is : "<<height*length*width<<endl;
}
shapes::shapes(int radius,int h){
    cout<<"The volume of rectangle is : "<<3.14*radius*radius*h<<endl;
}
shapes::shapes(int c){
    cout<<"The volume of rectangle is : "<<c*c*c<<endl;
}

int main(){
    shapes obj1(2,4,6);
    shapes obj2(2,3);
    shapes obj3(5);

    return 0;
}