#include<iostream>
using namespace std;
	class Employee{
		public:
			int salary;
			void sal(){
				cout<<"Enter Salary: ";
				cin>>salary;
				cout<<"Salary: "<<salary<<endl;
			}
	};
int main(){
	Employee e;
	e.sal();
	return 0;
	
}

