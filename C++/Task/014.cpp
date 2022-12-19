/*Write a program to sort the array using templates.(assending)*/
#include<iostream>
using namespace std;
template<typename T>
class A
{
	
	public:
		T i,j, a[5], temp;
		void input()
		{
			for(i=0;i<5;i++)
			{
				cout<<"Enter value : ";
				cin>>a[i];
			}
			
		}
		void display()
		{
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(a[i]>a[j])
					{
						temp = a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			
			for(i=0;i<5;i++)
			{
				cout<<endl<<a[i];
			}
		}
			
};
int main()
{
	A<int> obj;
	obj.input();
	obj.display();
	
	return 0;
}

