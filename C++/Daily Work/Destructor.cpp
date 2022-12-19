//destructor
#include<iostream>
using namespace std;

class A
{
	public:
		//parameterized constructor
		A (int p, int q)
		{
			cout<<"P = "<<p<<endl;
			cout<<"q = "<<q<<endl;
		}
		A()
		{
			cout<<"Default constructor"<<endl;
		}
		//destructor
		~A()
		{
			cout<<"Destructor call"<<endl;
		}
};
int main()
{
	A obj(23,24);
	A obj1;

 return 0;
}
