#include<iostream>
using namespace std;
//For circle
float area(float r){
    return(3.14*r*r);
}
//For rectangle
int area(int l,int b){
    return(l*b);
}
//For triangle
float area(float bs,float h){
    return((bs*h)/2);
}

int main(){
    int l,b;
    float r,bs,h;
    //cout<<"Enter side of square : ";
    //cin>>s;
    cout<<"Enter radius of circle : ";
    cin>>r;
    cout<<"Enter length and breadth of rectangle : ";
    cin>>l>>b;
    cout<<"enter base and height of triangle : ";
    cin>>bs>>h;

    cout<<"\nArea of circle is : "<<area(r)<<endl;
    cout<<"Area of rectangle is : "<<area(l,b)<<endl;
    cout<<"Area of triangle is : "<<area(bs,h)<<endl;

return 0;
}
