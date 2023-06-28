#include<iostream>
using namespace std;

class Area
{
	public:
		Area(int L,int B)
		{
			int A; 
			A=L*B;
		}
		
		void returnArea()
		{
			int A;
			cout<<A;
		}
};


int main()
{
	int l,b;
	cin>>l;
	cin>>b;
	
	Area A1(l,b);
	A1.returnArea();
	return 0;
}
