#include<iostream>
using namespace std;

string check(int a)
{
	if(a%2==0)
	return "even";
	else
	return "odd";
}

int main()
{
	int n;
	cin>>n;
	
	cout<<check(n);
	return 0;
}
