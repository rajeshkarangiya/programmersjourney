// Travel information using Inheritance
#include<iostream>
#include<string.h>
using namespace std;
class A
{
	public:
		char name[100],email[100],address[200],DOB[20],use[100],pass[100],contact[100];
		int age=0,n=99,dn,cn;
		void display()
		{			
			
			cout<<endl<<"----------------------Registration form---------------------------"<<endl<<endl;
			fflush(stdin);
			cout<<"1. Name : ";
			gets(name);
			rep:
			cout<<endl<<"2. Age (limit 18 to 99 years) : ";
			cin>>age;
			if(age>n)
			{
				cout<<endl<<"Enter age again"<<endl;
				goto rep;
			}
			dob:
			fflush(stdin);
			cout<<endl<<"3. DOB (dd/mm/yyyy): ";
			gets(DOB);
			dn=strlen(DOB);
			if(dn!=10)
			{
				cout<<endl<<"ERROR......Enter DOB again"<<endl;
				goto dob;
			}
			fflush(stdin);
			cout<<endl<<"4. Email : ";
			gets(email);
			cont:
			fflush(stdin);
			cout<<endl<<"5. Contact : ";
			gets(contact);
			cn=strlen(contact);
			if(cn!=10)
			{
				cout<<endl<<"Enter 10 contact digit number"<<endl;
				goto cont;
			}
			fflush(stdin);
			cout<<endl<<"6. Address : ";
			gets(address);
			
			cout<<endl<<"----------------------Login Crediantials---------------------------"<<endl;
			man:
			fflush(stdin);
			cout<<endl<<"1. User Name : ";
			cin>>use;
			man1:
			fflush(stdin);
			cout<<endl<<"2. Password : ";
			cin>>pass;
			if(use=="")
			{
				cout<<"username is mandatory for Registration."<<endl;
				goto man;
			}
			else if(pass=="")
			{
				cout<<"Password is mandatory for Registration."<<endl;
				goto man1;
			}
			cout<<endl<<"Registration done";		
		
		}
}; 
class B: public A
{
	public:
	char use1[100],pass1[100];
		
		int login()		
		{				
			cout<<endl<<endl<<"----------------------Login Again---------------------------"<<endl<<endl;
			
	        cout<<endl<<"Enter below details"<<endl;
	        next:
	        cout<<"User name"<<endl;
	    	cin>>use1;
	    	cout<<"Password"<<endl;
	    	cin>>pass1;
	        
	        if(strcmp(use1,A::use)==0 && strcmp(pass1,A::pass)==0)
	        {			        
			  cout<<"login successful";			        
	        }
	        else
	        {
	        	cout<<endl<<"login failed.... try again"<<endl;
	        	goto next;
	        }
	    
	    }
};

int main()
{
	char choice[100],choice1[100]="yes",choice2[100]="YES",choice3[100]="Yes",choice4[100]="no",choice5[100]="No",choice6[100]="NO";
	
	cout<<endl<<"              WELCOME TO RK TRAVELS            "<<endl;
	cout<<"-----------------------------------------------------"<<endl<<endl;
	cout<<" We provide following tours "<<endl;
	cout<<"     From            To"<<endl;
	cout<<"1. Ahmedabad     Baroda"<<endl;
	cout<<"2. Ahmedabad     Bhuj"<<endl;
	cout<<"3. Ahmedabad     Shimla"<<endl;
	cout<<"4. Ahmedabad     Uti"<<endl;
	cout<<"5. Ahmedabad     Jaipur"<<endl;
	
	cout<<endl<<"Press Yes for Registration : ";
	here:
	cin>>choice;
	
	if(strcmp(choice,choice1)==0)
	{
		B obj;
		obj.display();
		obj.login();
	}if(strcmp(choice,choice2)==0)
	{
		B obj;
		obj.display();
		obj.login();
	}
	if(strcmp(choice,choice3)==0)
	{
		B obj;
		obj.display();
		obj.login();
	}
	else if(strcmp(choice,choice4)==0)
	{
		cout<<"Thank you for searching with us. Have a great day.....";
	}
	else if(strcmp(choice,choice5)==0)
	{
		cout<<"Thank you for searching with us. Have a great day.....";
	}
	else if(strcmp(choice,choice6)==0)
	{
		cout<<"Thank you for searching with us. Have a great day.....";
	}	

 return 0;
	
}
