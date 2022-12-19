//single level Inheritance
/*
#include<iostream>
using namespace std;
//parent class
class A
{
	public:
	  
	  void displayA()
	  {
	  	cout<<"This is class A"<<endl;
	
	  }
};
//child class
class B: public A
{
	public:
		void displayB()
		{
			cout<<"This is class B"<<endl;			
		}
};
int main()
{
	B obj;
	obj.displayA();
	obj.displayB();
	return 0;
	
}
*/
/*
//Multi Level Inhertitance
#include<iostream>
using namespace std;

//parent class
class A
{
	public:
		void displayA()
		{
			cout<<"This is class A"<<endl;
		}
};
//child class
class B: public A
{
	public:
		void displayB()
		{
			cout<<"This is class B"<<endl;
		}
};
//child class
class C: public B
{
	public:
		void displayC()
		{
			cout<<"This is class C"<<endl;
		}
};
int main()
{
	C obj;
	
	obj.displayA();
	obj.displayB();
	obj.displayC();
	
 return 0;
}
*/
/*
//Multi level inheritage Example 2
#include<iostream>
using namespace std;

//parent class
class A
{
	public:
		int a;
};
class B: public A
{
	public:
		int b;
};
class C: public B
{
	public:
		void add()
		{
			cout<<"Enter Two Number : ";
			cin>>a>>b;
			
			cout<<"Additon = "<<a+b;
		}
};
int main()
{
	C obj;
	obj.add();
	
 return 0;
}
*/
/*
//Multiple Inheritance
#include<iostream>
using namespace std;

class A
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
};
class B
{
	public:
		int mul(int c, int d)
		{
			return c*d;
		}
};
class C: public A, public B
{
	public:
		void display()
		{
			cout<<"Addition = "<<add(23,20)<<endl;
			cout<<"Mutiplication = "<<mul(2,3)<<endl;
		}
};
int main()
{
	C obj;
	obj.display();
			
 return 0;
}
*/
/*
//Heirarchical Inhertance
#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"This is class A"<<endl;
		}
};
class B: public A
{
	public:
		void displayB()
		{
			cout<<"This is class B"<<endl;
		}
};
class C: public A
{
	public:
		void displayC()
		{
			cout<<"This is class C"<<endl;
		}
};
class D: public A
{
	public:
		void displayD()
		{
			cout<<"This is class D"<<endl;
		}
};
int main()
{
	B obj1;
	C obj2;
	D obj3;
	
	obj1.displayA();
	obj2.displayA();
	obj3.displayA();
	
 return 0;
}
*/
/*
//Hybrid Inheritance
#include<iostream>
using namespace std;

class A
{
	public:
		void display1()
		{
			cout<<"This is class A"<<endl;
		}
	
};
class B: public A
{
	public:
		void display2()
		{
			cout<<"This is class B"<<endl;
		}
	
};
class C: public A
{
	public:
		void display3()
		{
			cout<<"This is class C"<<endl;
		}
	
};
class D: public B,public C
{
	public:
		void display4()
		{
			cout<<"This is class D"<<endl;
		}
	
};
int main()
{
	D obj;
	obj.B::display1();
	obj.display2();
	obj.display3();
	obj.display4();
	
 return 0;
}
*/
/*
//addition using hybrid inheritance
#include<iostream>
using namespace std;

class A
{
	public:
		int a=5;
};
class B:public A
{
	public:
		int b=1;
};
class C:public A
{
	public:
		int c=2;
};
class D:public B,public C
{
	public:
		int add()
		{
			cout<<"Addition = "<<B::a+b+c;
		}
	
};
int main()
{
	D obj;
	obj.add();
	
 return 0;
}
*/
//Ambiguity in single levelinheritance
#include<iostream>
using namespace std;

class A
{
	public:
	void display()
	{
		cout<<"class A"<<endl;
		
	}
};
class B: public A
{
	public:
		void display()
		{
			cout<<"Class B"<<endl;
		}
};
int main()
{
	B obj;
	obj.A::display();
	obj.display();
 return 0;
}

