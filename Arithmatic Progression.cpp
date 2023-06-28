#include<iostream>
using namespace std;
int main()
{
	int a=5,d=2,i,n,an,S;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		an=a+((i-1)*d);
		cout<<"Term"<<i<<"="<<an<<" "<<endl;
		S=S+an;
    }
		cout<<"Sum ="<<S<<" "<<endl;
	return 0;
}
