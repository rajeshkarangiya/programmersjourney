
/*
#include<iostream>
using namespace std;
template<typename T>
class A
{
	public:
		T a,b;
		
		void input()
		{
			cout<<"Enter Two Number : ";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"Addition : "<<a+b;
		}
};
int main()
{
	cout<<"\n\n-----------------for integer-------------------"<<endl;
	A<int>obj;
	obj.input();
	obj.display();
	
	cout<<"\n\n------------------for Float---------------------"<<endl;
	A<float>obj1;
	obj1.input();
	obj1.display();
	
 return 0;
	
}
*/

#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b);

int main()
{
	cout<<"---------------------for integer------------------------";
	cout<<"Addition : "<<add<int>(23,4);
	
	cout<<endl<<"------------------for float---------------------------";
	cout<<"Addition : "<<add<float>(2.3,3.4);
	
	return 0;
}


