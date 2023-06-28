#include<iostream>
using namespace std;

void display(int *ptr)
{
	cout<<*ptr<<endl;
}

int main()
{
	int age=35;
	display(&age);
	return 0;
}
