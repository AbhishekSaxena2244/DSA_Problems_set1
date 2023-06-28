#include<iostream>
using namespace std;
int main()
{
	int i,arr[10];
	float sum=0,avg=0;
	
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	int largest=arr[0];
	int smallest=arr[0];
	
	for(i=0;i<10;i++)
	{
		sum+=arr[i];
		avg=sum/10;
		
		if(arr[i]>largest)
		largest=arr[i];
		
		if(arr[i]<smallest)
		smallest=arr[i];
	}
	cout<<sum<<endl<<avg<<endl<<largest<<endl<<smallest;
	return 0;
}
