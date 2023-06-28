#include<iostream>
using namespace std;
int main()
{
	int i,arr[10];
	int maximum=arr[0];
	int minimum=arr[0];
	
	for (int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	for (int i=0;i<10;i++)
	{
		if(arr[i]>maximum)
		maximum=arr[i];
		if(arr[i]<minimum)
		minimum=arr[i];
	}
	cout<<maximum<<" "<<minimum;
	return 0;
}
