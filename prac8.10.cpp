#include<iostream>
using namespace std;

class Volume
{
	public:
		Volume(int L,int B,int H)
		{
			int Vol;
			cin>>L;
			cin>>B;
			cin>>H;
			
			Vol=L*B*H;
			cout<<Vol;
		}
};

int main()
{
	int l,b,h;
	Volume A(l,b,h);	
	return 0;
}
