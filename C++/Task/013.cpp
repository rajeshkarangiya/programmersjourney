/*Write a program to swap the two values using templates*/
#include<iostream>
using namespace std;
template<typename T>
class A
{
	
	public:
		T a,b,temp;
		void input()
		{
			cout<<"Enter two number: ";
			cout<<endl<<"A = ";
			cin>>a;
			cout<<endl<<"B = ";
			cin>>b;
		}
		void display()
		{
			temp=a;
			a=b;
			b=temp;
			cout<<endl<<"A = "<<a<<endl<<endl<<"B = "<<b;
		}
			
};
int main()
{
	A<int> obj;
	obj.input();
	obj.display();
	
	return 0;
}

