#include<iostream>
using namespace std;

class Average
{
	public:
		void give()
		{
			float a,b,c,avg;
			cin>>a;
			cin>>b;
			cin>>c;
			
			avg=(a+b+c)/2;
			cout<<avg;
		}
};

int main()
{
	Average A;
	A.give();
	return 0;
}
