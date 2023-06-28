#include<bits/stdc++.h>
using namespace std;

int find(int arr[],int n)
{
	int key=arr[0],count=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==key)
		count++;
		else 
		count--;
		
		if(count==0)
		key=arr[i];
		count=1;
	}
	return key;
}
	
int is_majority(int arr[],int n)
{
	int key=find(arr,n);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		count++;
	}
	
	if(count>n/2)
	return key;
	else
	return 0;
}

int main()
{
	int n=9,arr[]={3,3,4,3,4,4,3,2,3};
	cout<<is_majority(arr,n);
	return 0;
}
