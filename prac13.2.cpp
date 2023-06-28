#include<iostream>
using namespace std;

void func(int x)
{
	int t1=0;
	int t2=1;
	int sum;
	for(int i=1;i<=x;i++)
	{
		cout<<t1;
		sum=t1+t2;
		t1=t2;
		t2=sum;
	}
}

int main()
{
	int a;
	cin>>a;
	func(a);
	return 0;
}
