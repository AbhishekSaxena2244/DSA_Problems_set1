#include<iostream>
using namespace std;

string eligible(int a)
{
	if(a>=18)
	return "Eligible to vote";
	else
	return "Not Eligible";
}

int main()
{
	int n;
	cin>>n;
	
	cout<<eligible(n);
	return 0;
}
