#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,rem,sum;
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		sum+=pow(rem,3);
	    n=n/10;
	}
	cout<<sum;
	return 0;
}
