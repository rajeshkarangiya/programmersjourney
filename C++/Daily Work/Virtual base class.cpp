// virtual base class : it will make our class unambigious since only one copy of a class is inherited
#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"Class A"<<endl;
		}
};
class B: virtual public A
{
	public:
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};
class C: virtual public A
{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};
class D: public B,public C
{
	public:
		void displayD()
		{
			cout<<"Class D"<<endl;
		}
};
int main()
{
	D obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
	obj.displayD();
	
	return 0;
}
