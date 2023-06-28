#include<iostream>
using namespace std;

struct address
{
	int HouseNo;
	string Street;
};

struct student
{
	string Name;
	int Rollno;
	address Addr;
};

int main()
{
	student Abhishek;
	Abhishek.Name = "Abhishek";
	Abhishek.Rollno = 1234;
	Abhishek.Addr.HouseNo = 11;
	Abhishek.Addr.Street = "Mughal Road";
	
	cout<<Abhishek.Name<<endl<<Abhishek.Rollno<<endl<<Abhishek.Addr.HouseNo<<endl<<Abhishek.Addr.Street<<endl;
	return 0;
}
