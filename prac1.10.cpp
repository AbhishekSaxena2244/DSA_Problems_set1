#include<iostream>
using namespace std;
int main()
{
	int num,rem,sum=0;
	
	cin>>num;
	for(int i=num;i>=1;i--)
	{
		i=i/10;
		rem=i%10;
		sum=sum+rem;
	}
	cout<<sum;
	return 0;
}                                                                                                                          
