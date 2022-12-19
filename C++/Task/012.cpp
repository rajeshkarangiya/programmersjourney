/*Write a program to find the max number from given two numbers using friend function*/
#include<iostream>
using namespace std;
class A
{
	private:
		int a=3,b=10;
	public:
		friend void display ( A obj);		
};
void display(A obj)
{
	int max;
	if(obj.a>obj.b)
	{
		cout<<endl<<"A is greater than B";
	}
	else
	{
		cout<<endl<<"B is greater than A";
	}
	
}
int main()
{
	A obj1;
	display(obj1);
	
	return 0;
}

