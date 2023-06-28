#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a=1,x,sum=1;
	int i,n;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cin>>x;
		a=pow(x,i)/i!;
		if(i%2==0)
		{
			cout<<a<<endl;
		    sum=sum+a;
		}
	}
	cout<<sum;
	return 0;
}
