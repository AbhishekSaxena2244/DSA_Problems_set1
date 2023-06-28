#include<iostream>
using namespace std;

struct student
{
	int Rollno;
	char Gender;
};

int main()
{
	student Abhishek;
	student *Abhishekptr;
	
	Abhishekptr= &Abhishek;
	
	Abhishek.Rollno=1234;
	Abhishekptr->Gender='M';
	
	cout<<Abhishekptr->Rollno<<endl;
	cout<<Abhishek.Gender<<endl;
	return 0;
}
