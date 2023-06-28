#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=5,arr1[]={1,2,3,4,5},arr2[n];
	for(int i=0;i<n;i++){
		int result=1;
		for(int j=0;j<=i;j++){
			result*=arr1[j];
		}
		 arr2[i]=result;
	}
	for(int i=0;i<n;i++)
	cout<<arr2[i]<<" ";
	return 0;
}
