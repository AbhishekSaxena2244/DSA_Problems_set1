#include<iostream>
using namespace std;
int main()
{
	int i,a,b;
	cout<<"Enter tne first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	
	for(i=a;i>=2;i--)
	{
		if(a%i==0 && b%i==0)
		{
		cout<<i<<endl;
		break;
	    }
	}
	return 0;
}
