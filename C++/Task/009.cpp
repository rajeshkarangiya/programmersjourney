/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
		A(int x=0, int y=0)
		{
			a=x;
			b=y;
		}
		A operator + (const A & obj)
		{
			A op;
			op.a = a + obj.a;
			op.b = b + obj.b;
			
			return op;
		}
		void display()
		{
			cout<<"Addition = "<<a<<" , ";
			cout<<b;
		}
};
int main()
{
	A obj1(1,3);
	A obj2(5,6);
	A obj3 = obj1+obj2;
	obj3.display();
	
	return 0;
}

