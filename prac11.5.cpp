#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			if(j<=i)
			cout<<"*";
			else
			cout<<" ";
		}
		
		for(int j=1;j<=a;j++)
		{
			if(i<=(a-j))
			cout<<" ";
			else 
			cout<<"*";
		}
		cout<<endl;
    }
	
	for(int i=a;i>=1;i--)
	{
		for(int j=1;j<=a;j++)
		{
			if(j<=i)
			cout<<"*";
			else
			cout<<" ";
		}
		for(int j=a;j>=1;j--)
		{
			if(i<j)
			cout<<" ";
			else
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
