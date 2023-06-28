#include<iostream>
using namespace std;

class AddDistance
{
	public:
	    AddDistance(int F1,int F2,int I1,int I2)
	    {
		    int sum1,sum2;
		    sum1=F1+F2;
		    sum2=I1+I2;
		    cout<<sum1<<"feet "<<sum2<<"inch";
	    }
};

int main()
{
	int f1,f2,i1,i2;
	cin>>f1>>i1;
	cin>>f2>>i2;
	AddDistance A(f1,f2,i1,i2);
	return 0;
}
