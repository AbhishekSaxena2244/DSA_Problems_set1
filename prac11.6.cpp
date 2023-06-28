#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i=a;i>=1;i--)
	{
		for(int j=1;j<=a;j++)
		{
			if(i>=j)
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
