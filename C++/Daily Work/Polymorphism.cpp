/*
//polymorphism : function/method overloading
#include<iostream>
using namespace std;

class A
{
	public:
		
		void display()
		{
			cout<<"Hello"<<endl;
		}
		void name (string name)
		{
			cout<<"Name = "<<name<<endl;
		}
		void display(int a, int b)
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
};
int main()
{
	A obj;
	
	obj.display();
	obj.name("ABC");
	obj.display(2,3);

 return 0;
}
*/
/*
//polymorphism : function/method overriding
#include<iostream>
using namespace std;

class A
{
	public:
		void display(int a,int b)
		{
			cout<<"Addition = "<<a+b<<endl;
		}
		
};
class B:public A
{
	public:
		void display (int p, int q)
		{
			cout<<"Add = "<<p+q<<endl;
		}
};
int main()
{
	B obj;
	obj.A::display(12,32);
	obj.display(2,3);
	
	return 0;
}
*/
/*
//polymorphism : operator overloading
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
		//operator overload
		A operator + (const A &obj)
		{
			A op;
			op.a = a + obj.a;
			op.b = b + obj.b;
			
			return op;
		}
		void display()
		{
			cout<<"Addition = "<<a<<",";
			cout<<b;
		}
};
int main()
{
	A obj1(1,3);
	A obj2(5,6);
	
	A obj3 = obj1 + obj2;
	obj3.display();
	
 return 0;
}
*/

