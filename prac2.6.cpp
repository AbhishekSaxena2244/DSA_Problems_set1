#include<iostream>
using namespace std;
int main()
{
	int n,mul=1,r;
	cin>>n;
	
	while(n>0)
	{
		r=n%10;
		mul=mul*r;
		n=n/10;
	}
	cout<<mul;
	return 0;
}
