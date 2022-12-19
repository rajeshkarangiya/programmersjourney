#include<iostream>
#include<string.h>
using namespace std;
class A
{
	public:
		char name[50]; char acc_num[50]; char acc_typ[50]; 
		int bal=20000;
		char*ptr=name;
		char display()
		{
			
			cout<<"Name of Depositor : ";
			gets(name);
			char*ptr=name;
			cout<<"Account Number : ";
			gets(acc_num);
			cout<<"Type of Account : ";
			gets(acc_typ);
			cout<<"Balance amount in account : "<<bal;
			
		}

		
	
};
class B: public A
{
	public:
		int dep,fin;
		char display1()
		{
			cout<<endl<<"Enter amount to deposite : ";
			cin>>dep;
			fin = bal-dep;
			cout<<endl<<"Available Balance : "<<fin;
			cout<<endl<<"Name : "<<*ptr;				
		}
};

int main()
{
	A obj;
	B obj1;
	
	obj.display();
	obj1.display1();
	
 return 0;
}
