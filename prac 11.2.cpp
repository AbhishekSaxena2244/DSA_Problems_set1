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
			if(i<=(a-j))
			cout<<" ";
			else
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
