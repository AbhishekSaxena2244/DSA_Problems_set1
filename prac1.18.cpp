#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
		cout<<i<<"x"<<j<<"="<<i*j<<" ";
        }
	    cout<<endl<<endl;
	}	
	return 0;
}
