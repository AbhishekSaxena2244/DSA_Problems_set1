#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		cout<<i<<" ";
	    sum+=i;
		}	
	}
	cout<<endl<<sum;
	return 0;
}
