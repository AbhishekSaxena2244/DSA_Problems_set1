#include<iostream>
using namespace std;
int main()
{
	int x,y,sum=0;
	cin>>x;
	cin>>y;
	
	while(y>0)
	{
		sum=sum+x;
		y=y-1;
	}
	cout<<sum;
    return 0;
}
