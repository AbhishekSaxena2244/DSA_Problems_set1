#include<iostream>
using namespace std;

int fact(int n)
{
	int sum=1;
	for(int i=1;i<=n;i++)
	{
		sum*=i;
	}
	return sum;
}

int main()
{
	int a,b,c;
	cin>>a>>b;
	c=a-b;
	fact(a);
	fact(b);
	fact(c);
	cout<<"nCr= "<<fact(a)/(fact(c)*fact(b));
	return 0;
}
