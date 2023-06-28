#include<iostream>
using namespace std;

void rotate(int arr[],int start,int end)
{int temp=arr[end];
	for(int i=end;i>=start;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[start]=temp;
}

void PrintArray(int arr[],int n,int index)
{
	rotate(arr,0,2);
	rotate(arr,0,3);
	cout<<arr[index];
}

int main()
{
	int n=5,index=1,arr[]={1,2,3,4,5};
	PrintArray(arr,n,index);
	return 0;
}
