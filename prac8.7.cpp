#include<iostream>
using namespace std;

class Area
{
	public:
		void setDim(int L,int B)
		{
			int Area;
			Area=L*B;
		}
		
		void getArea()
		{
			int Area;
			cout<<Area;
		}
};

int main()
{
	int l,b;
	cin>>l;
	cin>>b;
	
	Area A1;
	A1.setDim(l,b);
	A1.getArea();
	return 0;
}
