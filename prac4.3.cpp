#include<iostream>
using namespace std;
int main()
{
	int arr[20],i;
	
	for(i=0;i<20;i++)
	{
		cin>>arr[i];
	}
	
	
	
	for(i=0;i<20;i++)
	{
		if(arr[i]<0)
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	for(i=0;i<20;i++)
	{
		if(arr[i]>0)
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	for(i=0;i<20;i++)
	{
		if(arr[i]%2==0 && arr[i]>0)
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	for(i=0;i<20;i++)
	{
		if(arr[i]%2!=0 && arr[i]>0)
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}
