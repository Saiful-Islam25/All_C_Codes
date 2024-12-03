#include<iostream>
using namespace std;

void func(string country="Germany"){
	cout<<country<<endl;
}
int main(){
	func("Sweden");
	func();
	func("Norway");
	
	return 0;
}
