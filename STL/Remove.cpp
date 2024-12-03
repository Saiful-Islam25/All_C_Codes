#include<iostream>
using namespace std;

int main(){
    string s;
    s="Abdhinafisnusrat";
    s.erase(s.begin()+5,s.begin()+10);
    cout<<s<<endl;
}