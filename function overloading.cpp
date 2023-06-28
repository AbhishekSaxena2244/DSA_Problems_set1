#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		void func(int x)
		{
			a=x;
			cout<<"\n The value of a is "<<a;
		}
		
		void func(int x,int y)
		{
			a=x;
			b=y;
			cout<<"\n The value of a is "<<a<<"\n The value of b is "<<b;
		}
};

int main()
{
	A obj;
	obj.func(10);
	obj.func(20,30);
	return 0;
}
