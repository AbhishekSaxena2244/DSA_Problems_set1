#include<bits/stdc++.h>
using namespace std;

int findProduct(int arr[],int n,int k)
{
	sort(arr,arr+n);
	
	int product =1;
	for(int i=0;i<k;i++)
	product*=arr[i];
	
	return product;
}

int main()
{
	int n=6,k=4,arr[]={11,8,5,7,5,100};
	cout<<findProduct(arr,n,k);
	return 0;
}
