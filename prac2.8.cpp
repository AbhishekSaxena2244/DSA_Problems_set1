//Conversion form other bases to decimal base
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,r,d=0,sum=0;
	cin>>n;
	
	while(n>0)
	{
		r=n%10;
	    sum+=r*pow(2,d);
		n=n/10;
		d=d+1;
	}
	cout<<sum;
	return 0;
}
