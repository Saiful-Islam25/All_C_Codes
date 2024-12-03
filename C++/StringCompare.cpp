#include<iostream>
using namespace std;
int main(){
    string str1;
    cout<<"Enter your first string : ";
    getline(cin,str1);
     string str2;
    cout<<"Enter your second string : ";
    getline(cin,str2);

    if(str1!=str2){
        cout<<"The given two strings are not same !";
    }else{
        cout<<"The given strings are same "<<endl;
    }


    return 0;
}
