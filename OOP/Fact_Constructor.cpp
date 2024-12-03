#include<iostream>
using namespace std;

class Test{
    int n,i,fact;
    public:

    Test(){
        cout<<"Enter a number : ";
        cin>>n;

        fact=1;
        for(i=1;i<=n;i++){
            fact=fact*i;
        }

    }
    void print(){
        cout<<"Factorial of the number is : "<<fact;
    }
};
int main(){
    Test obj;
    obj.print();

    return 0;
}