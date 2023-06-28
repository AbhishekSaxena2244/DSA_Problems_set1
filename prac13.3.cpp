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
	int a;
	cin>>a;
	fact(a);
	cout<<fact(a);
	return 0;
}
