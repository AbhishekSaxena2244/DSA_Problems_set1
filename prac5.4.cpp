#include<iostream>
using namespace std;

int maximum(int a)
{
	return a;
}

int minimum(int b)
{
	return b;
}

int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	
	if(x>y && x>z)
	cout<<maximum(x);
	if(y>x && y>z)
	cout<<maximum(y);
	if(z>x && z>y)
	cout<<maximum(z);
	
	cout<<endl;
	
	if(x<y && x<z)
	cout<<minimum(x);
	if(y<x && y<z)
	cout<<minimum(y);
	if(z<x && z<y)
	cout<<minimum(z);
	
	return 0;
	
}
