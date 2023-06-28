#include<iostream>
using namespace std;

void display(const int *start, const int *end)
{
	const int *ptr;
	for(ptr=start; ptr!=end; ptr++)
    {
	    cout<<*ptr<<endl;
    }
}

int main()
{
	int numbers[] = {22,25,36,16,21,33,44,43,34,22};
	display(numbers,numbers+6);
	cout<<endl;
	display(numbers+2,numbers+10);
	return 0;
}
