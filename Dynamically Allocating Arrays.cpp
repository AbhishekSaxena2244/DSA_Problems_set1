//Dynamically Allocating Arrays Depending User Input

#include<iostream>
using namespace std;
int main()

	int *pointer=NULL;
	cout<<"How many values you will enter"<<endl;
	
	int input;
	cin>>input;
	
	pointer= new int[input];
	
	int value;
	
	for(int i=0;i<input;i++)
	{
	cout<<"Enter the value "<<i+1<<endl;
	cin>>value;
	
	*(pointer+i)= value;
    }
	
	cout<<"The values you entered are"<<endl;
	for(int i=0;i<input;i++)
	{
	cout<<i+1<<"-->"<<*(pointer+i)<<endl;
    }
	delete []pointer;
	return 0;
}
