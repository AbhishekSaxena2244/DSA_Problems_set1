#include<iostream>
#include<math.h>
using namespace std;

int hamming(int arr[],int n)
{
	int brr[2*n];
	for(int i=0;i<n;i++)
	brr[i]=arr[i];
	for(int i=0;i<n;i++)
	brr[n+i]=arr[i];
	
int maxhamm=0;
	for(int i=1;i<n;i++)
	{
		int current=0;
		for(int j=i,k=0;j<(n+i);j++,k++)
		{
			if(brr[j]!=arr[k])
			current++;
			if(current==n)
			return n;
			maxhamm=max(maxhamm,current);
		}
	}
	return maxhamm;
}

int main()
{
	int n=4,arr[]={0,2,4,8};
	cout<<hamming(arr,n);
	return 0;
}
