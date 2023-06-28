#include<iostream>
using namespace std;
int main()
{
	int i,a=0,n,sum=0;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		a=i*i;
		cout<<a<<endl;
		sum=sum+a;
	}
	cout<<sum;
	return 0;
}
