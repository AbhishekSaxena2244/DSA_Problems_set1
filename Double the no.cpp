#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void doubleNo(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1])
		{
			arr[i]+=arr[i+1];
			arr[i+1]=0;
		}
	}
	int a=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(&arr[i],&arr[a]);
			a++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{int n=10,arr[]={0,2,2,2,0,6,6,0,0,8};
    doubleNo(arr,n);
	return 0;
}
