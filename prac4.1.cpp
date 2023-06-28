#include<iostream>
using namespace std;
int main()
{
	int i,arr[10];
	
	    cout<<"Enter the numbers"<<endl;
		
		for(i=0;i<10;i++)
		{
			cin>>arr[i];
		}
		
	    cout<<"The numbers you entered are:"<<endl;
		
		for(i=0;i<10;i++)
		{
			cout<<arr[i]<<" ";
		}
		return 0;
}
