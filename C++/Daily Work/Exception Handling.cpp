#include<iostream>
using namespace std;

float div(float a, float b)
{
	if(b==0)
	{
		throw "Zero division error";
	}
	
	return a/b;
}
int main()
{
	float a,b;
	
	cout<<"Enter two number : ";
	cin>>a>>b;
	
	try
	{
		cout<<"Div : "<<div(a,b);
	}
	catch (const char*e)
	{
		cout<<"Error : "<<e;
	}

 return 0;
}

