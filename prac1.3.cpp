#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	
	cout<<"Input a number of terms: "<<endl;
	cin>>n;
	
	cout<<"The natural numbers upto "<<n<<"th terms are:"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" ";
		sum=sum+i;
	}
	cout<<endl;
	cout<<"The sum of the natural numbers is: "<<sum<<endl;
	return 0;
}
