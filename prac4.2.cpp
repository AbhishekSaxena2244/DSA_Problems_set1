#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[10];
	
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	cin>>n;
	
	for(i=0;i<10;i++)
	{		
	    if(arr[i]==n)
	    cout<<"The number you entered is present.";
	}   
	cout<<"The number you entered is not present.";
	return 0;
}
