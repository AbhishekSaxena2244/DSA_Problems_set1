#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			break;
		}
		if(i!=j)
		cout<<i<<" ";
	}
	return 0;
}
