//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class A
{
	public:
		A(int a, int b)
		{
			cout<<"Addition ="<<a+b;
		}
};

class B
{
	public:
		B(int a,int b)
		{
			cout<<endl<<"Substraction ="<<a-b;
		}
};
class C
{
	public:
		C(int a,int b)
		{
			cout<<endl<<"Multiplication ="<<a*b;
		}
};
class D
{
	public:
		D(int a, int b)
		{
			cout<<endl<<"Division ="<<a/b;
		}
};
int main()
{
	int a,b;
	cout<<"Enter Two number";
	cin>>a>>b;
	A obj(a,b);
	B obj1(a,b);
	C obj2(a,b);
	D obj3(a,b);
 return 0;
}
