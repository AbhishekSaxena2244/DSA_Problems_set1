#include<iostream>
using namespace std;

class A
{
	protected:
		int a;
	public:
		void getval(int x)
		{
			a=x;
		}
		void putval()
		{
			cout<<"Number is "<<a<<endl;
		}
};

class B:public A
{
	public:
		void putvalue1()
		{
			cout<<"Square of the number is "<<(a*a)<<endl;
		}
};

class C:public A
{
	public:
		void putvalue2()
		{
			cout<<"Cube of the number is "<<(a*a*a)<<endl;
		}
};

int main()
{	
	A obj1;
	B obj2;
	C obj3;
	
	obj1.getval(10);
	obj1.putval();
	obj2.putvalue1();
	obj3.putvalue2();
	return 0;
}
