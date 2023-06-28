#include<bits/stdc++.h>
using namespace std;

void findMedian(float arr[],int n)
{
	
	for(int i=0;i<n;i++)
	{int temp1=0,temp2=0;
		if(i%2==0)
		{
			temp1=(i+1)/2;
			cout<<arr[temp1]<<" ";
		}
		else
		{
			temp1=i/2;
			temp2=(i/2)+1;
			cout<<(arr[temp1]+arr[temp2])/2<<" ";
		}
	}
}

int main()
{int n=5;
float arr[]={5,15,10,20,3};
findMedian(arr,n);
	return 0;
}
