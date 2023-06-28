#include<iostream>
using namespace std;
int main()
{
	int age=40,weight=60;
	bool human= true;
	
	int *ageptr,*weightptr;
	bool *humanptr;
	
	ageptr= &age;
	weightptr= &weight;
	humanptr= &human;
	
	cout<<age<<"-->"<<ageptr<<endl<<weight<<"-->"<<weightptr<<endl;
	cout<<human<<"-->"<< humanptr<<endl;
	
	cout<<*ageptr<<endl<<*weightptr<<endl;
	cout<<*humanptr<<endl;
	return 0;
}
