#include<iostream>
using namespace std;

class Employee
{
		
	public:
		char name[20];
		int year;
		string salary;
		string address;	
};

int main()
{
	
	Employee A;
	    cin>>A.name;
		cin>>A.year;
		cin>>A.salary;
		cin>>A.address;

	Employee B;
        cin>>B.name;
		cin>>B.year;
		cin>>B.salary;
		cin>>B.address;
	
	Employee C;
        cin>>C.name;
		cin>>C.year;
		cin>>C.salary;
		cin>>C.address;

	cout<<"Name   Year of joining     Salary        Address"<<endl;	
	cout<<A.name<<"     "<<A.year<<"              "<<A.salary<<"          "<<A.address<<endl;
	cout<<B.name<<"     "<<B.year<<"              "<<B.salary<<"          "<<B.address<<endl;
	cout<<C.name<<"     "<<C.year<<"              "<<C.salary<<"          "<<C.address<<endl;
	return 0;
}
