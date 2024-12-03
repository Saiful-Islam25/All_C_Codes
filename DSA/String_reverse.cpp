#include<iostream>
using namespace std;

void String(string str,int i,int j){
    cout<<"Call receive for "<<str<<endl;

    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    String(str,i,j);
}
int main(){
    string name="Nijhum";
    cout<<endl;
    String(name,0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;

    return 0;
}