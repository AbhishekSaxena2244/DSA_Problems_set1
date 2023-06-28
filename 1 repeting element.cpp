#include<bits/stdc++.h>
using namespace std;

int findRepeting(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n-1;i++)
	res=res^(i+1)^arr[i];
	
	res=res^arr[n-1];
	return res;
}

int main()
{
	int n=10,arr[]={9,8,2,6,1,8,5,3,4,7};
	cout<<findRepeting(arr,n);
	return 0;
}
