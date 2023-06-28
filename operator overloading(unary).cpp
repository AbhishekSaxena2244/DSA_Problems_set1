#include<iostream>
using namespace std;

class A
{
	int a,b,c;
	public:
		void getval(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		
		void operator-()
		{
			a=-a;
			b=-b;
			c=-c;
		}
		
		void putval()
		{
			cout<<"\n The value of a is "<<a<<"\n The value of b is "<<b<<"\n The value of c is "<<c;
		}
};

int main()
{
	A obj;
	obj.getval(10,20,-30);
	obj.putval();
	obj.operator-();
	obj.putval();
	
	return 0;
}
