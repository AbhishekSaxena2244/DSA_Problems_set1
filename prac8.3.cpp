#include<iostream>
using namespace std;

class student
{
	private:
		char name[10];
		int rollno;
		char branch[10];
	public:	
		void func()
		{
		    cout<<"Enter the details of student: "<<endl;
		    
		    cin>>name;
		    cin>>rollno;
		    cin>>branch;
		
		    cout<<"Name: "<<name<<endl<<"Rollno: "<<rollno<<endl<<"Branch: "<<branch<<endl;
	    }
};

int main()
{
	student A;
	A.func();
	return 0;
}
