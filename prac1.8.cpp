#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	
	for(i=n-1;i>=1;i--)
	{
		for(j=2;j<=n;j++)
		{
			if(i%j==0)
			break;
		}
		if(i==j)
		{
		cout<<i;
		break;
		}
	}
	return 0;
}
