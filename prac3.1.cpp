#include<iostream>
using namespace std;
int main()
{
	char oper;
	float n1,n2;
	
	cout<<"Enter the first number"<<endl;
	cin>>n1;
	cout<<"Enter the second number"<<endl;
	cin>>n2;
	
	cout<<"Enter the operator"<<endl;
	cin>>oper;
	
	switch(oper)
	{
		case'+': cout<<n1+n2<<endl;
		break;
		
		case'-': cout<<n1-n2<<endl;
		break;
		
		case'*': cout<<n1*n2<<endl;
		break;
		
		case'/': cout<<n1/n2<<endl;
		break;
		
		default: cout<<"Operator is incorrect"<<endl;
		break;
	}
	return 0;
}
