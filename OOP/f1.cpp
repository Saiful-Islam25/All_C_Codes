#include<iostream>
using namespace std;

class Test{
    int i,n,fact;
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
            cout<<"Factorial of the number is : "<<fact<<endl;
        }
        
};
int main(){
    Test obj;
    obj.print();

return 0;
}