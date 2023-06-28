#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	cout<<"The first ten natural numbers are:"<<endl;
	
	for(int i=1;i<=10;i++)
	{
	   cout<<i<<" ";
       sum=sum+i;
	}
	cout<<endl;
	cout<<"The sum of first ten natural numbers is: "<<sum; 
	return 0;
}
