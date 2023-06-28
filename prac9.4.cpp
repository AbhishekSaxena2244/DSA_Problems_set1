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
		int putval()
		{
			cout<<"Number is "<<a<<endl;
		}
};

class B:public A
{
	public:
		void square()
		{
			cout<<(a*a)<<endl;
		}
};

class C:public A
{
	public:
		void cube()
		{
			cout<<(a*a*a)<<endl;
		}
};

int main()
{
	int a;
	cin>>a;
	
	A obj1;
	B obj2;
	C obj3;
	
	obj1.getval(a);
	obj1.putval();
	obj2.square();
	obj3.cube();
	
	return 0;
}
