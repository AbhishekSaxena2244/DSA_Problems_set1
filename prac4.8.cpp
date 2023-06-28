#include<iostream>
using namespace std;
int main()
{
	int i,j,arr[10];
	
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	for(j=9;j>=0;j--)
	{
		if(arr[i]==arr[j])
	    cout<<"Elements are same";
	}
	return 0;
}
