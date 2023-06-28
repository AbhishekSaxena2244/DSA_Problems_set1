#include<bits/stdc++.h>
using namespace std;
//UNSORTED
int inserting(int arr[],int n,int capacity,int k)
{
	if(n>=capacity)
	return n;
	arr[n]=k;
	return n+1;
}

void unsorted()
{
	int n=6,capacity=20,k=4,arr[capacity]={5,2,6,1,7,3};
	for(int i=0;i<n;i++)
	cout<<arr[i];
	n=inserting(arr,n,capacity,k);
	cout<<"\nAfter Insertion"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i];
	cout<<endl<<endl;
}

//SORTED

int insert(int arr[],int n,int k,int capacity)
{int i;
	if(n>=capacity)
	return n;
	for( i=n-1;(i>=0 && arr[i]>k);i--)
	{
		arr[i+1]=arr[i];
	}
	arr[i+1]=k;
	return n+1;
}

void sorted()
{
	int capacity=20,n=8,k=3,arr[capacity]={1,2,4,5,6,7,8,9};
	for(int i=0;i<n;i++)
	cout<<arr[i];
	
	n=insert(arr,n,k,capacity);
	cout<<"\nAfter insertion"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i];
}

int main()
{
	unsorted();
	sorted();
	return 0;
}
