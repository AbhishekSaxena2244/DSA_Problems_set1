#include<iostream>
using namespace std;

class triangle
{
	public:
	void func()
	{
		int a=3,b=4,c=5,area=1,peri=0;
		area=(a*b)/2;
		peri=a+b+c;
		
		cout<<area<<endl;
		cout<<peri;
	}
	
};

int main()
{
	triangle A;
	A.func();
	return 0;
}
