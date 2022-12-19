
/*//this pointer
#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		void get(int q)
		{
			this->a=q;
		}
		void set()
		{
			cout<<"Number = "<<a;
		}
		
};
int main()
{
	A obj;
	
	obj.get(23);
	obj.set();
 return 0;
}
*/
//Example 2
#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		
		void input(int a)
		{
			this->a=a;
		}
		void display()
		{
			cout<<"A = "<<a;
		}
};
int main()
{
	A obj;
	
	obj.input(12);
	obj.display();
	
 return 0;	
}
