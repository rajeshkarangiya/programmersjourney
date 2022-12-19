/*
//Simple example of class and object
#include<iostream>
using namespace std;

class A
{
	public:
	
	int a;
	
	void display()
	{
		cout<<"A= "<<a;
	}
};
int main()
{
	A obj;
	obj.a=17;
	obj.display();
	
 return 0;
}
*/
/*
//Addition of two number using class and object
#include<iostream>
using namespace std;

class A
{
	public:
		
	int a,b;
	void add()
	{
		cout<<"Addition = "<<a+b;
		
	}
		
};
int main()
{
	A obj;
	obj.a=5;
	obj.b=5;
	obj.add();
	
 return 0;
}
*/
/*
// Different class
#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;
	
	void display()
	{
		cout<<"Addition ="<<a+b<<endl;
	}
};
class B
{
	public:
	int a,b;
	
	void displayb()
	{
		cout<<"This is class B"<<endl;
	}
};
int main()
{
	A obj,obj1;
	B obj3;
	
	cout<<"\n\n----------class A---------------"<<endl<<endl;
	cout<<"\n\n----------first-----------------"<<endl<<endl;
	obj.a=5;
	obj.b=6;
	obj.display();
	
	cout<<"\n\n----------Second-----------------"<<endl<<endl;
	obj1.a=6;
	obj1.b=9;
	obj1.display();
	
	cout<<"\n\n----------class B---------------"<<endl<<endl;
	obj3.displayb();
	
	return 0;
	
}
*/
/*
#include<iostream>
using namespace std;

class A
{
	public:
	int a;
	
	void getdata(int i)
	{
		a=i;
	}
	void setdata()
	{
		cout<<"A = "<<a;
	}
};
int main()
{
	A apple;
	apple.getdata(23);
	apple.setdata();
	
 return 0;
}
*/
#include<iostream>
using namespace std;

class A
{
	private:
	string name;
	
	public:
	void input();
	void display();
};
void A::input()
{
	cout<<"Enter name : ";
	cin>>name;
}
void A::display()
{
	cout<<"Name = "<<name;
}
int main()
{
	A apple;
	apple.input();
	apple.display();
	
	return 0;
}
