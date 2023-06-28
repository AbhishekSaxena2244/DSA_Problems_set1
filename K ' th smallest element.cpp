#include<bits/stdc++.h>
using namespace std;

void find(int arr[],int n,int k)
{
	sort(arr,arr+n);
	cout<<arr[k-1];
}


int main()
{int n=6,k=3,arr[]={7,10,4,3,20,15};
    find(arr,n,k);
	return 0;
}
