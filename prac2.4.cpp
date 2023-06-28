#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	
	cin>>n;
	
	while(n>0)
	{
		c+=1;
		n=n/10;
	}
	cout<<c;
	return 0;
}
