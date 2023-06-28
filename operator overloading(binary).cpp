#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		void getval(int x,int y)
		{
			a=x;
			b=y;
		}
		A operator+(A t2)
		{
			A t3;
			t3.a=a+t2.a;
			t3.b=b+t2.b;
			return t3;
		}
		void putval()
		{
			cout<<"value of a is "<<a<<", value of b is "<<b<<endl;
		}
};

int main()
{
	A X,Y,Z;
	X.getval(10,20);
	Y.getval(30,40);
	Z=X+Y;
	X.putval();
	Y.putval();
	Z.putval();
	return 0;
}
