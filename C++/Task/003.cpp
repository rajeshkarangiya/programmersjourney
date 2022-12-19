//Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
int mul(int a, int b)
{
	return a*b;
}
int cube(int c)
{
	return c*c*c;
}
int main()
{
	cout<<"Multiplication = "<<mul(12,2);
	cout<<endl<<"Cube= "<<cube(3);
	
 return 0;
}
