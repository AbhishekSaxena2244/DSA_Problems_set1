#include<iostream>
using namespace std;

void arrRotation(int arr[],int n)
{
    int i,temp=arr[0];
    for(i=0;i<n;i++)
    {
    	arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int maxsum(int arr[],int n)
{
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		int current=0;
		for(int j=0;j<n;j++)
		{
			current+=(j*arr[j]);
	    }
	    
	    if(current<sum)
		arrRotation(arr,n);
	    else
		sum=current;
		arrRotation(arr,n);
	}
	return sum;
}

    
int main()
{
	int n=5,arr[n]={2,7,8,3,1};
	cout<<maxsum(arr,n);
	return 0;
}
