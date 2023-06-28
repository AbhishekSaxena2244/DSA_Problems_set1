#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int roll;
	char name[20];
	public:
	void getdata(int x,char *y)
	{
		roll=x;
		strcpy(name,y);
	}
	
	void putdata()
	{
		cout<<roll<<endl<<name;
	}
};

int main()
{
	student A;
	student *P;
	P=&A;
	
	P->getdata(21,"Mike");
	P->putdata();
	
	return 0;
}
