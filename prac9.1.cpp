#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		void getval_a(int);
		int get_a();
};

class B:public A
{
	int b,c;
	public:
		void getval_b(int);
		void sum();
		void display();
};

void A::getval_a(int x)
{
	a=x;
}

int A::get_a()
{
	return a;
}

void B::getval_b(int x)
{
	b=x;
}

void B::sum()
{
	c=get_a()+b;
}

void B::display()
{
	cout<<get_a()<<"+"<<b<<"="<<c;
}

int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	
	B obj;
	obj.getval_a(a);
	obj.getval_b(b);
	obj.sum();
	obj.display();
	
	return 0;
}
