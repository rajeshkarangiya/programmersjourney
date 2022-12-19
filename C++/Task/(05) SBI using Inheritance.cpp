//using concept of heirarchical inheritance and fuction make SBI programm
#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public:
		int ch;
		int state()
		{
			cout<<"------------------------Welcome to SBI---------------------------------"<<endl;
			
			cout<<"1. Gujarat"<<endl;
			cout<<"2. Rajasthan"<<endl;
			cout<<"3. MP"<<endl;
			cout<<"4. MH"<<endl;
			cout<<endl<<"Select your state : ";
			cin>>ch;
				switch(ch)
				{
					case 1:
						cout<<endl<<"------------------------Welcome to Gujarat SBI---------------------------------"<<endl;
						break;
					case 2:
						cout<<endl<<"------------------------Welcome to Rajasthan SBI---------------------------------"<<endl;
						break;
					case 3:
						cout<<endl<<"------------------------Welcome to MP SBI---------------------------------"<<endl;
						break;
					case 4:
						cout<<endl<<"------------------------Welcome to MH SBI---------------------------------"<<endl;
						break;
						
				}		
		}
};
class B: public A
{
	public:
		int hc;
		int city()
		{
			
			switch(A::ch)
			{
				case 1:
					cout<<"1. Ahmedabad"<<endl;
					cout<<"2. Baroda"<<endl;
					cout<<"3. surat"<<endl;
					cout<<"4. Rajkot"<<endl;
					
					cout<<endl<<"Select you city : ";
					cin>>hc;
					switch(hc)
					{
						case 1:
							cout<<endl<<"------------------------Welcome to Ahmedabad SBI---------------------------------"<<endl;
							break;
						case 2:
							cout<<endl<<"------------------------Welcome to Baroda SBI---------------------------------"<<endl;
							break;
						case 3:
							cout<<endl<<"------------------------Welcome to Surat SBI---------------------------------"<<endl;
							break;
						case 4:
							cout<<endl<<"------------------------Welcome to Rajkot SBI---------------------------------"<<endl;
							break;
					}
					break;
				case 2:
					cout<<"1. Jaipur"<<endl;
					cout<<"2. Jodhpur"<<endl;
					cout<<"3. Kota"<<endl;
					cout<<"4. Bhiwadi"<<endl;
					
					cout<<endl<<"Select you city : ";
					cin>>hc;
					switch(hc)
					{
						case 1:
							cout<<"------------------------Welcome to Jaipur SBI---------------------------------"<<endl;
							break;
						case 2:
							cout<<"------------------------Welcome to Jodhpur SBI---------------------------------"<<endl;
							break;
						case 3:
							cout<<"------------------------Welcome to Kota SBI---------------------------------"<<endl;
							break;
						case 4:
							cout<<"------------------------Welcome to Bhiwadi SBI---------------------------------"<<endl;
							break;
					}
					break;
				case 3:
					cout<<"1. Indore"<<endl;
					cout<<"2. Bhopal"<<endl;
					cout<<"3. Jabalpur"<<endl;
					cout<<"4. Gwalior"<<endl;
					
					cout<<endl<<"Select you city : ";
					cin>>hc;
					switch(hc)
					{
						case 1:
							cout<<"------------------------Welcome to Indore SBI---------------------------------"<<endl;
							break;
						case 2:
							cout<<"------------------------Welcome to Bhopal SBI---------------------------------"<<endl;
							break;
						case 3:
							cout<<"------------------------Welcome to Jabalpur SBI---------------------------------"<<endl;
							break;
						case 4:
							cout<<"------------------------Welcome to Gwalior SBI---------------------------------"<<endl;
							break;
					}
					break;
				case 4:
					cout<<"1. Mumbai"<<endl;
					cout<<"2. Pune"<<endl;
					cout<<"3. Nagpur"<<endl;
					cout<<"4. Thane"<<endl;
					
					cout<<endl<<"Select you city : ";
					cin>>hc;
					switch(hc)
					{
						case 1:
							cout<<"------------------------Welcome to Mumbai SBI---------------------------------"<<endl;
							break;
						case 2:
							cout<<"------------------------Welcome to Pune SBI---------------------------------"<<endl;
							break;
						case 3:
							cout<<"------------------------Welcome to Magpur SBI---------------------------------"<<endl;
							break;
						case 4:
							cout<<"------------------------Welcome to Thane SBI---------------------------------"<<endl;
							break;
					}
					break;
			}
			
			
			
		}
};

class D
{
	public:
		char name[100],DOB[10],address[200],type[100],use1[100],pass1[100];
		char use2[100],pass2[100];
		int ch3,bal=20000,deb,ced,tod,toc;
		int adh;
		int reg1()
		{
			cout<<endl<<"------------------------Registration---------------------------------"<<endl;
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter DOB : ";
			cin>>DOB;
			cout<<"Adhar PIN : ";
			cin>>adh;
			cout<<"Address : ";
			cin>>address;
			cout<<"Account type : ";
			cin>>type;
			
			cout<<"successfully registered"<<endl;
			cout<<"------------------------Your bank details---------------------------------"<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"DOB : "<<DOB<<endl;
			cout<<"Adhar PIN : "<<adh<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"Account type : "<<type<<endl;
			
			cout<<endl<<"-------------Login details----------------"<<endl;
			
			cout<<"Username : "<<endl;
			cin>>use1;
			cout<<"Password : "<<endl;
			cin>>pass1;
			
			cout<<endl<<"-------------Login again----------------"<<endl;
			again:	
			cout<<"Username : "<<endl;
			cin>>use2;
			cout<<"Password : "<<endl;
			cin>>pass2;
			
		
			if(strcmp(use1,use2)==0 && strcmp(pass1,pass2)==0)
			{
				cout<<"----------------Menu-----------------"<<endl;
				cout<<"1. debit"<<endl;
				cout<<"2. Credit"<<endl;
				cout<<"3. view"<<endl;
				cout<<"4. Logout"<<endl;
				here:
				cout<<"Enter choice : ";
				cin>>ch3;
				
				switch(ch3)
				{
					case 1:
						cout<<"Enter the amount to be debited : ";
						cin>>deb;
						tod=20000-deb;
						cout<<"Remaining Balance : "<<tod;
						break;
					case 2:
						cout<<"Enter the amount to be Credited : ";
						cin>>ced;
						toc=20000+ced;
						cout<<"Remaining Balance : "<<toc;
						break;
					case 3:
						cout<<"Available Balance: "<<bal;
						break;
					case 4:
						break;					
			    }
				
			}
			else
			{
				cout<<"Username or password is incorrect.. try again";
				goto again;
			}
			
					
			
		}
};
class C: public D
{
	public:
		char use[100],pass[100];
		int ch1;
		int ch3,bal=20000,deb,ced,tod,toc;
		void reg()
		{
			cout<<"Are you a registered user ?"<<endl;
			cout<<"1.Yes              2.No"<<endl;
			cout<<"Select from above : ";
			cin>>ch1;
			if(ch1==1)
			{
			cout<<endl<<"-------------Login details----------------"<<endl;
			
			cout<<"Username : "<<endl;
			cin>>use;
			cout<<"Password : "<<endl;
			cin>>pass;
	    	cout<<"----------------Menu-----------------"<<endl;
				cout<<"1. debit"<<endl;
				cout<<"2. Credit"<<endl;
				cout<<"3. view"<<endl;
				cout<<"4. Logout"<<endl;
				cout<<"Enter choice : ";
				cin>>ch3;
				
				switch(ch3)
				{
					case 1:
						cout<<"Enter the amount to be debited : ";
						cin>>deb;
						tod=20000-deb;
						cout<<"Remaining Balance : "<<tod;
						break;
					case 2:
						cout<<"Enter the amount to be Credited : ";
						cin>>ced;
						toc=20000+ced;
						cout<<"Remaining Balance : "<<toc;
						break;
					case 3:
						cout<<"Available Balance: "<<bal;
						break;
					case 4:
						break;			
	    	
		        }
			
			
	    	}
	    	else if(ch1==2)
	    	{
	    		D::reg1();
			}
			
		}
};
int main()
{
	B obj;
	C obj1;
		
	obj.state();
	obj.city();
	obj1.reg();
		

 return 0;
}
