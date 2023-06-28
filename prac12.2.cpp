#include<iostream>
using namespace std;
int main()
{
	int n,rem=0,result=0;
	cin>>n;
	while(n>0)
	{
	rem=n%10;
	result=(result*10)+rem;
	n=n/10;
    }
    cout<<result;
	return 0;
}
