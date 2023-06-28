#include<iostream>
using namespace std;
int main()
{
	int i,j,k,arr[10];
	
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	for(j=9;j>=5;j--)
	{
		cout<<arr[j];
	}
	
	cout<<endl;
	
	for(k=4;k>=0;k--)
	{
		cout<<arr[k];
	}
	return 0;
}
