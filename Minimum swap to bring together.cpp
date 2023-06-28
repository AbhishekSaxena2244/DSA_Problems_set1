#include<iostream>
using namespace std;

swapp(int arr[],int n)
{int key=3,count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=key)
		{
			swap(arr[count],arr[i]);
			count++;
		}
	}
    cout<<count-1<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i];
	}
}

int main()
{
	int n=5,arr[]={2,1,5,6,3};
	swapp(arr,n);
	return 0;
}
