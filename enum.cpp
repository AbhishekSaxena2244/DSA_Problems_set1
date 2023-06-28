#include<iostream>
using namespace std;

int main()
{
	enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
	week currentday=tuesday;
	week nextday=wednesday;
	cout<<currentday<<endl<<nextday;
	return 0;
}
