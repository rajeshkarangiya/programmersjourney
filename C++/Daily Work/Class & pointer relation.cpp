//class & pointer relation

#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		void input()
		{
			cout<<endl<<"Enter a Number : ";
			cin>>a;
		}
		void display()
		{
			cout<<"A = "<<a;
		}
};
int main()
{
	A obj;
	A*p;
	p=&obj;
	p->input();
	p->display();
	
 return 0;
}
