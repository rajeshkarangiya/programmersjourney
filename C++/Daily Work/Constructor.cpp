// constructor 
/*
#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"constructor cell";
			
		}
};
int main()
{
	A obj;
	
	return 0;
}
*//*
//Parameterized construtor
#include<iostream>
using namespace std;

class A
{
	public:
	//Default constructor
	A ()
	{
		cout<<"Default"<<endl;
	}
	//parameterized constructor
	A (int a)
	{
		cout<<"A = "<<a<<endl;
	}
	A (char n,char n1)
	{
		cout<<"N = "<<n<<endl;
		cout<<"N1 ="<<n1<<endl;
	}
};
int main()
{
	A a;
	A obj1('w','t');
	A obj(12);
	
 return 0;
}
*/
//Copy Constructor
#include<iostream>
using namespace std;

class A
{
	public:
		int a,b;
		//parametreized constructor
		A (int p, int q)
		{
			a=p;
			b=q;
		}
		A (A &obj)
		{
			cout<<"A = "<<obj.a<<endl;
			cout<<"B = "<<obj.b;
		}
};
int main()
{
	A obj(2,3);
	A obj1(obj);
	return 0;
}

