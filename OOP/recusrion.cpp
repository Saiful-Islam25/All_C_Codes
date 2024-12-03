#include<iostream>
using namespace std;

int solve(int n){
    if(n==0){
        return 0 ;
    }

    solve(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    solve(n);

    return 0;
}
