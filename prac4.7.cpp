#include<iostream>
using namespace std;
int main()
{
	int i,arr[10];
	
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	int largest= arr[0];
	int smallest= arr[0];
	
	for(i=0;i<10;i++)
	{
		if(arr[i]>largest)
		largest=arr[i];
		
		if(arr[i]<smallest)
		smallest=arr[i];
	}
	cout<<largest<<endl;
	cout<<smallest;
	return 0;
}

