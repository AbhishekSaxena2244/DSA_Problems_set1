#include<iostream>
using namespace std;

void display(int number[],int length)
{
	for(int i=0;i<length;i++)
	cout<<number[i]<<endl;
}

int main()
{
	int number[]={26,32,18,21,13,35};
	int length=6;
	display(number,length);
	return 0;
}
