#include<iostream>
#include<math.h>
using namespace std;

bool func(int x)
{
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	if(func(i))
	cout<<i<<",";
	return 0;
}
