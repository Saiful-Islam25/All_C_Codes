#include<iostream>
using namespace std;

class shape{
    public:
    virtual void print(){
        cout<<"Printing"<<endl;
    }
};
class rectangle:public shape{
    public:
    int l,w,area;
    void area_rect(){
        cout<<"Insert l and w : "<<endl;
        cin>>l>>w;
        area=l*w;
    }
    void print(){
        cout<<"Area is : "<<area<<endl;
    }

};
class cube:public rectangle{
    public:
    int h,volume;
    void volume_cube(){
        cout<<"Insert h : "<<endl;
        cin>>h;
        volume=h*h*h;
    }
    void print(){
        cout<<"Vloume is : "<<volume<<endl;
    }
};
int main(){
    rectangle obj;
    shape *obj1=&obj;
    obj1->print();
    obj.area_rect();
    obj.print();
    cube obj2;
    obj2.volume_cube();
    obj2.print();
    return 0;


}