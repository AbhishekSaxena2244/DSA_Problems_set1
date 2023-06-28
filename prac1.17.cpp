#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float i,n,sum,a=0;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		a=pow(i,3);
		cout<<"Number is: "<<i<<endl<<"cube is: ";
		cout<<a<<endl<<endl;
		sum=sum+a;
	}
	cout<<"sum is: "<<sum;
	return 0;
}
