/*Write a program to calculate the area of circle, rectangle and triangle using Function Overloading*/
#include<iostream>
using namespace std;
class A
{
	public:
		float radius,area;
		int length,width,are;
		float base,height,ar;
		float shape(float a)
		{
			cout<<endl<<"Radius : "<<a;
			
			area=3.14*a*a;
			cout<<endl<<"Area of circle :  "<<area;
			cout<<endl<<"--------------------------------------------------";
		}
		int shape(int a, int b)
		{
			cout<<endl<<"length : "<<a;
			cout<<endl<<"width : "<<b;
			
			are=a*b;
			cout<<endl<<"Area of rectangle :  "<<are;
			cout<<endl<<"--------------------------------------------------";
		}		
		double shape(double a, double b)
		{
			cout<<endl<<"Base : "<<a;
			cout<<endl<<"Height : "<<b;
			
			ar=0.5*a*b;
			cout<<endl<<"Area of triangle :  "<<ar;
			cout<<endl<<"--------------------------------------------------";
		}
		
};
int main()
{
	A obj;
	
	obj.shape(2.0);
	obj.shape(1,2);
	obj.shape(1.00,2.00);
	
	return 0;
}

