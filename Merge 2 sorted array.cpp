#include<bits/stdc++.h>
using namespace std;

void merging(int arr[],int brr[],int n,int m)
{
	for(int i=m;i<m+n;i++)
	arr[i]=brr[i-m];
	
	sort(arr,arr+m+n);
}


int main()
{
	int n=4,m=3,arr[m+n]={2,7,10},brr[n]={5,8,12,14};
	merging(arr,brr,n,m);
	for(int i=0;i<m+n;i++)
	cout<<arr[i];
	return 0;
}

