//Conversion from decimal to other bases
#include<iostream>
using namespace std;
int main()
{
	int n,r,d;
	
	cout<<"Enter the number"<<endl;
	cin>>n;
	
	cout<<"2 for binary"<<endl<<"8 for octal"<<endl<<"16 for hexadecimal"<<endl;
	cin>>d;
	
	while(n>0)
	{
	    r=n%d;
		n=n/d;
	    cout<<r;
	}
	return 0;
}
