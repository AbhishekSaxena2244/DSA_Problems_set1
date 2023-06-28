#include<iostream>
using namespace std;

class triangle
{
	public:
		triangle(int a,int b,int c)
		{
			int area,peri;
			area=(a*b)/2;
			peri=a+b+c;
		}
		
		void func()
		{
			int area,peri;
			cout<<area<<endl;
			cout<<peri<<endl;
		}
};


int main()
{
	triangle A(3,4,5);
	A.func();
	return 0;
}
