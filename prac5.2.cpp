#include<iostream>
using namespace std;

int product(int a,int b)
{
	return (a*b);
}

int main()
{
	int x,y;
	cin>>x;
	cin>>y;
	
	cout<<product(x,y)<<endl;
	return 0;
}
