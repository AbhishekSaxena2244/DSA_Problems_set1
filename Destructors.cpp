#include<iostream>
using namespace std;

class student
{	
	public:
		
		char name[20];
	    int rollno;
		
		student()
		{
			cin>>name;
			cin>>rollno;
			cout<<name<<endl<<rollno<<endl;
		}
		
		~student()
		{
			cout<<"Object destroyed"<<endl;
		}
};

int main()
{
	student A;
	return 0;
}	
