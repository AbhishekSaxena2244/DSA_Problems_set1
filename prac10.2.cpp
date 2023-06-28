#include<iostream>
using namespace std;
int main()
{
	int arr[5],*ptr,sum=0;
	ptr=arr;
	
	for(int j=0;j<=4;j++)
	{
		cin>>arr[j];
	}
	
	for(int i=0;i<=4;i++)
	{
		cout<<*ptr;
	    sum+=*ptr;
	    *ptr++;
	}
	cout<<"\n"<<sum;
	return 0;
}
