#include<iostream>
using namespace std;

void func1(int n,int arr[])
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}

void func2(int n,int arr[],int d)
{
	while(d>0)
	{
		int temp=arr[0];
		for(int i=0;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		arr[n-1]=temp;
		d--;
	}
}

void func3(int n,int arr[])
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	int n,d;
	cout<<"Length of array ";
	cin>>n;
	int arr[n];
	cout<<"\nrotate by ";
	cin>>d;
	
	func1(n,arr);
	func2(n,arr,d);
	func3(n,arr);
	return 0;
}
