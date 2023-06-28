#include<iostream>
using namespace std;
int main()
{
	int a=0,i,j,n,sum=0;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			a=1+j;
		    cout<<"1+"<<j<<"="<<a<<endl;
		    sum+=a;
		    cout<<sum<<endl;
		}
		
	}

	return 0;
}
