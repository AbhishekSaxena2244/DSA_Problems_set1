#include<iostream>
using namespace std;
int main()
{
	int a,*ptr1,**ptr2;
	cin>>a;
	ptr1=&a;
	ptr2=&ptr1;
	cout<<*ptr1<<" "<<ptr1<<endl;
	cout<<*ptr2<<" "<<**ptr2<<" "<<ptr2;
	return 0;
}
