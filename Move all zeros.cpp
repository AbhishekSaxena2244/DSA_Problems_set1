#include<iostream>
using namespace std;

void move(int arr[],int n)
{
	//METHOD 1
	int count=0;
for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		count++;
		else
		cout<<arr[i];
	}
	while(count>0)
	{
	    cout<<0;
	    count--;
    }
    cout<<endl;
    //METHOD 2
	for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            swap(arr[count++], arr[i]);
			
	for (int i = 0; i < n; i++)   
	{
		cout<<arr[i];
	}
}

int main()
{int n=8,arr[]={0,1,9,8,4,0,0,2};
move(arr,n);
	return 0;
}

