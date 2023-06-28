#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double i,a,n,sum=0;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		a=1/pow(i,i);
		cout<<a<<endl;
		sum=sum+a;
	}
	cout<<"sum is: "<<sum;
	return 0;
}
