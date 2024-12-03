#include<iostream>
using namespace std;

class complex{
    int real,imag;
public:
complex(){
    real=0;
    imag==0;
}
complex(int i){
    real=i;
    imag=i;`                                                                    
complex(int a,int b){
    real=a;
    imag=b;
}
void add(complex c1,complex c2){
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
  }
void display(){
        cout<<real<<"+"<<imag<<"i";
  }
};
int main(){
    int real,imag;
    cout<<"\nEnter a single value for real and imaginary parts of first complex number : ";
    cin>>real;
    complex c1 (real);

    cout<<"\nFirst complex number is given by - ";
    c1.display();

    cout<<"\nEnter two different value for real and imaginary parts of second complex : ";
    cin>>real>>imag;
    complex c2(real,imag);

    cout<<"\nSecond complex number is given by - ";
    c2.display();

    complex c3;
    cout<<"\nInitially third complex number is - ";
    c3.display();

    cout<<"\nStoring the result of addition of first and second complex into third..";
    c3.add(c1,c2);

    cout<<"\nThird complex number is given by - ";
    c3.display();
return 0;

    
    }