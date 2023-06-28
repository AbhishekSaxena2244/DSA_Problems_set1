//without parameter.
#include<iostream>
using namespace std;

class display
{
	public:
		display()
		{
			int x,y,z;
			cin>>x;
			cin>>y;
			z=x+y;
	    }
	    void func()
	    {
	    	int z;
			cout<<z;
		}
};


//With parameter.
#include<iostream>
using namespace std;

class show
{
	public:
		show(int x,int y)
		{
			int z;
			z=x+y;
		}
		void para()
		{
			int z;
			cout<<z;
		}
};



int main()
{
	display A;
	A.func();
	
	cout<<endl;
	
	show B(10,20);
	B.para();
	
	return 0;
}


