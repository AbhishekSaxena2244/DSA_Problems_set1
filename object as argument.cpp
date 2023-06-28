#include<iostream>
using namespace std;

class A
{
	int h,m;
	public:
		void getval(int x,int y)
		{
			h=x;
			m=y;
		}
		A sum(A t1,A t2)
		{
			m=t1.m+t2.m;
			h=m/60;
			m=m%60;
			h=h+t1.h+t2.h;
		}
		void putval()
		{
			cout<<"value of hours is "<<h<<", value of minutes is "<<m<<endl;
		}
};

int main()
{
	A X,Y,Z;
	X.getval(3,40);
	Y.getval(4,30);
	Z.sum(X,Y);
	X.putval();
	Y.putval();
	Z.putval();
	return 0;
}
