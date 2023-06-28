#include<iostream>
using namespace std;

class A
{
	protected:
	    int roll;
	public:
	   void getroll(int);
	   void putroll();
};

void A::getroll(int a)
{
	roll=a;
}

void A::putroll()
{
	cout<<"roll no."<<roll<<endl;
}

class B
{
	protected:
		float mark1,mark2;
	public:
	   void getmark(float,float);
	   void putmark();
};

void B::getmark(float b, float c)
{
	mark1=b;
	mark2=c;
}

void B::putmark()
{
	cout<<"Marks:"<<endl<<mark1<<","<<mark2;
}

class C:public A,public B
{
	public:
		void getval();
};

void C::getval()
{
	int a;
	float m1,m2;
	cin>>a>>m1>>m2;
	
	A obj2;
	B obj3;
	obj2.getroll(a);
	obj3.getmark(m1,m2);
	obj2.putroll();
	obj3.putmark();
}

int main()
{
	C obj3;
	obj3.getval();
	return 0;
}
