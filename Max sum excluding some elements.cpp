#include<bits/stdc++.h>
using namespace std;
int findsumUntil(int ar1[],int ar2[],int n,int m)
{
	int current=INT_MIN,Max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if (binary_search(ar2,ar2+m,ar1[i]))
		{
			current=0;
			continue;
		}			
		current=max(ar1[i],current+ar1[i]);
		Max=max(current,Max);
	}
	return Max;
}

void findsum(int ar1[],int ar2[],int n,int m)
{
	sort(ar2,ar2+m);
	int maxsum=findsumUntil(ar1,ar2,n,m);
	if(maxsum==INT_MIN)
	cout<<"element not found";
	else
	cout<<maxsum;
	
}


int main()
{
	int n=5,m=4,ar1[n]={3,4,5,-4,6},ar2[m]={1,8,5};
	findsum(ar1,ar2,n,m);
	return 0;
}
