#include<iostream>
using namespace std;

void Home(int src,int dest){
    cout<<" From Source to "<<src<<" Destination "<<dest<<endl;
    if(src==dest){
        cout<<" Reached Home Safely! "<<endl;
        return ;
    }

    src++;
    Home(src,dest);
    

}

int main(){
    int src=1;
    int dest=10;
    
    
    cout<<endl;
    Home(src,dest);

    return 0;
    
}