#include<iostream>
using namespace std;

class A
{
	protected:
	    int a;
	public:
		void getval_a(int);
};

void A::getval_a(int x)
{
	a=x;
}

class B:public A
{
	protected:
	    int b;
	public:
		void getval_b(int);
		
};

void B::getval_b(int x)
{
	b=x;
}

class C:public B
{
	    int c;
	public:
		void add();
		void display();
};

void C::add()
{
	c=a+b;
}

void C::display()
{
	cout<<a<<"+"<<b<<"="<<c;
}

int main()
{
	int m,n;
	cin>>m;
	cin>>n;
	
	C obj;
	obj.getval_a(m);
	obj.getval_b(n);
	obj.add();
	obj.display();
	return 0;
}
