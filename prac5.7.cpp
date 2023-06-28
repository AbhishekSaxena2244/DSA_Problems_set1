#include<iostream>
using namespace std;

int i;

string check(int a)
{
	for(i=2;i<a;i++)
	{
		if(a%i!=0)
		cout<<"Prime number"<<endl;
		else
		cout<<"Not a prime number"<<endl;
		break;
	}
}

int main()
{
	int n;
	cin>>n;
	
	cout<<check(n);
	return 0;
}
