#include<iostream>
using namespace std;

class b;
class a{
    int x;
    public:
    void assign(int t ){
        x=t;
    }
    void display(){
        cout<<"After swapping value of x : "<<x<<endl;
         }
    friend void swap(a&,b&);
};
class b{
    int y;
    public:
    void assign(int s){
        y=s;
    }
    void display(){
        cout<<"After swapping value of y : "<<y<<endl;
    }
    friend void swap(a&,b&);

};
void swap(a &c,b &d){
    int temp;
    temp=c.x;
    c.x=d.y;
    d.y=temp;
}
int main(){
    a n;
    b m;
    int a,b;
    cout<<"Before swapping"<<endl;
    cout<<"Enter x = ";
    cin>>a;
    cout<<"Enter y = ";
    cin>>b;
    n.assign(a);
    m.assign(b);
    swap(n,m);
    n.display();
    m.display();

return 0;
}
