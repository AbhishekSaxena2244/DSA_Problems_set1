#include<iostream>
using namespace std;
int main()
{
	int a,b=1;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			if(j<=i)
			{
			    cout<<b<<" ";
			    b++;
		    }
		}
		cout<<endl;
	}
	return 0;
}
