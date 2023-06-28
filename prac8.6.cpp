#include<iostream>
using namespace std;

class Rectangle
{
	public:
		Rectangle(int L,int B)
		{
			int area;
			area=L*B;
		}
		void func()
		{
			int area;
			cout<<area;
		}
};


int main()
{
	Rectangle A(4,5);
	A.func();
	
	cout<<endl;
	
	Rectangle C(5,8);
	C.func();
	return 0;
}
