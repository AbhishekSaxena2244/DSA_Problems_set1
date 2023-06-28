#include<iostream>
#include<string.h>
using namespace std;

class student
{
	public:
		char name[20];
		int rollno;
		long int phoneno;
		string address;
};


int main()
{
	cout<<"Enter the data of first student:"<<endl;
	student A;
	cout<<"Enter the name"<<endl;
	cin>>A.name;
	cout<<"Enter the rollno"<<endl;
	cin>>A.rollno;
	cout<<"Enter the phoneno"<<endl;
	cin>>A.phoneno;
	cout<<"Enter the address"<<endl;
	cin>>A.address;
	
	cout<<endl;
	
	cout<<"Enter the data of second student"<<endl;
	student B;
	cout<<"Enter the name"<<endl;
	cin>>B.name;
	cout<<"Enter the rollno"<<endl;
	cin>>B.rollno;
	cout<<"Enter the phoneno"<<endl;
	cin>>B.phoneno;
	cout<<"Enter the address"<<endl;
	cin>>B.address;
	
	cout<<endl;
	
	cout<<"Data of first student is:"<<endl<<"Name: "<<A.name<<endl<<"Rollno: "<<A.rollno<<endl<<"Phoneno: "<<A.phoneno<<endl<<"Address: "<<A.address<<endl<<endl;
	
	cout<<"Data of second student is:"<<endl<<"Name: "<<B.name<<endl<<"Rollno: "<<B.rollno<<endl<<"Phoneno: "<<B.phoneno<<endl<<"Address: "<<B.address;
	return 0;
}
