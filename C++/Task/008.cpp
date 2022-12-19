/*Write a program to Mathematic operation like Addition,
Subtraction, Multiplication, Division Of two number using
different parameters and Function Overloading*/
  
#include<iostream>
using namespace std;
class A
{
	public:
		void math(int a, int b)
		{
			cout<<endl<<"Addition = "<<a+b;
		}
		void math()
		{
			float a=5.0,b=3.2; 
			cout<<endl<<"Substraction = "<<a-b;
		}
		void math(double a, double b)
		{
			cout<<endl<<"Multiplication = "<<a*b;
		}
		void math( char a,char  b)
		{
			cout<<endl<<"Division = "<<a/b;
		}
};
int main()
{
	A obj;
	obj.math(2,3);
	obj.math();
	obj.math(5.0,3.0);
	obj.math('9','3');
	
 return 0;
}
