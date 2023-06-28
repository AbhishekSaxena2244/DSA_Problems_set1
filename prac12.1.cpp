#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool a=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
		cout<<"Not a prime number"<<endl;
		a=1;
		break;
	    }
    }
    if(a==0)
    cout<<"Prime number";
 return 0;
}
