#include<bits/stdc++.h>
using namespace std;

int findElement(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		res=res^arr[i];
	}
	return res;
}

int main()
{
	int n=9,arr[]={7,3,5,4,5,3,2,4,2};
	cout<<findElement(arr,n);
	return 0;
}
