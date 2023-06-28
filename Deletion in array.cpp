#include<bits/stdc++.h>
using namespace std;

//UNSORTED
int deletion(int arr[],int k,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		return i;
	}
	return -1;
}

void unsorted()
{
	int n=6,k=6,arr[n]={5,2,6,1,7,3};
	int pos=deletion(arr,k,n);
	
	for(int i=0;i<n;i++)
	cout<<arr[i];
	
	for(int i=pos;i<n;i++)
	arr[i]=arr[i+1];
	
	n=n-1;
	cout<<"\nAfter deletion"<<endl;
	
	for(int i=0;i<n;i++)
	cout<<arr[i];
	cout<<endl;
}

//SORTED
int del(int arr[],int l,int h,int k)
{
	int mid=(l+h)/2;
	if (k==arr[mid])
	return mid;
	if(k<arr[mid])
	return del(arr,l,mid-1,k);
	return del(arr,mid+1,h,k);
}

void sorted()
{int n=7,k=3,arr[n]={1,2,3,4,5,6,7};
	for(int i=0;i<n;i++)
	cout<<arr[i];
	
	int pos=del(arr,0,n,k);
	for(int i=pos;i<n;i++)
	arr[i]=arr[i+1];
	n=n-1;
	
	cout<<"\nAfter deletion"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i];
}

int main()
{
	unsorted();
	sorted();
	return 0;
}
