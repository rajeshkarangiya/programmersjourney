/*Write a program to calculate the area of circle, rectangle and triangle using Function Overloading*/
#include<iostream>
using namespace std;
class A
{
	private:
		int a=5,b=2;
	public:
		friend void display ( A obj);		
};
void display(A obj)
{
	int temp;
	temp = obj.a;
	obj.a = obj.b;
	obj.b = temp;
	cout<<"A = "<<obj.a<<" B = "<<obj.b;
	
}
int main()
{
	A obj1;
	display(obj1);
	
	return 0;
}

