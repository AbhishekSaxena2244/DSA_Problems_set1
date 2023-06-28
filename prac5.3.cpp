#include<iostream>
#include<math.h>
using namespace std;

float pi=3.14;

double circumference(int a)
{	
	return (2*pi*a);
}

double area(int a)
{
	return(pi*pow(a,2));
}

int main()
{
	int r;
	cin>>r;
	
	cout<<circumference(r)<<endl;
	cout<<area(r);
	return 0;
}
