#include<bits/stdc++.h>
using namespace std;

void merging(int arr[],int l,int mid,int h)
{
	int n1=mid-l+1,n2=h-mid;
	int b[n1];
	int c[n2];
	
	for(int i=0;i<n1;i++)
	b[i]=arr[i+l];
	
	for(int i=0;i<n2;i++)
	c[i]=arr[mid+1+i];
	
	int i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		if(b[i]<c[j])
		{
			arr[k]=b[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=c[j];
			j++;
			k++;
		}
	}
	
	while(i<n1)
	{
		arr[k]=b[i];
		i++;
		k++;
	}
	
	while(j<n2)
	{
		arr[k]=c[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[],int l,int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,h);
		merging(arr,l,mid,h);
	}
}

int main()
{
	int n=7,arr[]={10,90,49,21,5,23,2};
	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
