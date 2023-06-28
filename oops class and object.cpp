#include<iostream>
using namespace std;
class student
{
	public:
		
	char name[20];
	int rollno;
	char branch[10];
	
	void func()
	{
		cout<<"The data given is:"<<endl;
	}
	

};

int main()
{
	student a;
	
	    cout<<"Enter the name"<<endl;
	    cin>>a.name;
	    cout<<"Enter the rollno"<<endl;
	    cin>>a.rollno;
	    cout<<"Enter the Branch"<<endl;
	    cin>>a.branch;
	
	    a.func();
	
	    cout<<"Name: "<<a.name<<endl;
	    cout<<"RollNo: "<<a.rollno<<endl;
	    cout<<"Branch: "<<a.branch<<endl;
	
	return 0;
}
