#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n)
{
	int max=INT_MIN,current=0;
	for(int i=0;i<n;i++)
	{
	    current+=arr[i];
		if(max<current)
		max=current;
		if(current<0)
		current=0;
	}
	return max;
}


int main()
{
	int n=8,arr[]={-2,-3,4,-1,-2,1,5,-3};
	cout<<maxSum(arr,n);
	return 0;
}
