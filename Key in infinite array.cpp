#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int h,int x)
{
	if(h>=l)
	{
		int mid=(l+h)/2;
		if(arr[mid]==x)
		return mid;
		if(arr[mid]>x)
		return binarysearch(arr,l,mid-1,x);
		return binarysearch(arr,mid+1,h,x);
	}
	return -1;
}

int find(int arr[],int k)
{
	int l=0,h=1;
	int val=arr[0];
	while(val<k)
	{
		l=h;
		h=h*2;
		val=arr[h];
	}
	return binarysearch(arr,l,h,k);
}

int main()
{
	int arr[]={3,5,7,9,10,90,100,130,140,160,170};
	int ans=find(arr,140);
	if(ans==-1)
	cout<<"Element not found";
	else
	cout<<ans;
	return 0;
}
