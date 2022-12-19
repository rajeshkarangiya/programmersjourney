//Area of circle, Triangle, Rectangle using function and loop in C++
#include<iostream>
using namespace std;
int menu()
{	
	int area,r;
	cout<<endl<<"Enter the radius of the circle in m : ";
	cin>>r;
	area=3.14*r*r;
	cout<<"Area of circle = "<<area;
}
int menu2()
{
	int a,b,h;
	cout<<endl<<"Base in m : ";
	cin>>b;
	cout<<"Height in m : ";
	cin>>h;
	a=0.5*b*h;
	cout<<"Area of Triangle = "<<a;

}
int menu3()
{
	int ar,l,w;
	cout<<endl<<"Length in m : ";
	cin>>l;
	cout<<"Width in m : ";
	cin>>w;
	ar=l*w;
	cout<<"Area of Rectangle = "<<ar;
}

int main()
{
	int ch;
	cout<<"---------------------Menu-------------------"<<endl;
	cout<<"1. Circle"<<endl;
	cout<<"2. Triangle"<<endl;
	cout<<"3. Rectangle"<<endl;
	
	cout<<"Enter choice : ";
	cin>>ch;
	switch(ch)
	{
	     case 1:
    	{
		   menu();
		   break;	
    	}
	   case 2:
     	{
	    	menu2();
			break;		
    	}
	   case 3:
    	{
		    menu3();
		    break;		
    	}
	   default:
	    {
	    	cout<<"Invalid Input";
		}
	}
	return 0;
}
