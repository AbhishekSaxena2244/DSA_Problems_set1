#include<iostream>
using namespace std;
int main()
{
	int n,A=1;
	cout<<"Input a number to find the factorial:"<<endl;
	cin>>n;
	
	for( int i=1;i<=n;i++)
	{
		A=A*i;
	}
	cout<<"Factorial of "<<n<<" is:"<<endl;
	cout<<A;
	return 0;
}
