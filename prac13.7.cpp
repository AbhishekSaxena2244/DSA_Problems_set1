#include<iostream>
#include<math.h>
using namespace std;

int func(int n)
{
	int rem,sum=0,a=0;
	while(n>0)
	{
		rem=n%10;
		sum+=(rem*pow(2,a));
		n=n/10;
		a++;
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	func(n);
	cout<<func(n);
	return 0;
}
