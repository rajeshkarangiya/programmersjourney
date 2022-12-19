#include<iostream>
using namespace std;
int choice()
{
	here:
	char hc;
	int ch,q,total,extra=0;;
	int a=50;
	int b=29;
	int m=39;
	int c=45;
	int o=70;
	
	
    one:
    last:
	cout<<"\nEnter Choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Apple price = "<<a;
			ch=a;
			break;
		case 2:
			cout<<"Bannana price = "<<b;
			ch=b;
			break;
		case 3:
			cout<<"Mango price = "<<m;
			ch=m;
			break;
		case 4:
			cout<<"Cherry price = "<<c;
			ch=c;
			break;
		case 5:
			cout<<"Orange price = "<<o;
			ch=o;
			break;
		default:
		    cout<<"Invalid Input!!. Enter choice again";
		    goto one;
		    break;
	}
	
	
	cout<<"\nEnter quantity : ";
	cin>>q;
	
	total = q*ch;
	cout<<"Total bill = "<<total;
	extra+=total;
	
	fflush(stdin);
	cout<<endl<<"Want to continue buying then press y or else press n :  ";
	cin>>hc;
	while(hc=='y'||hc=='Y')
	{
		
		goto last;
			
	}
	cout<<endl<<"Final bill = "<<extra;
	cout<<endl<<"Thank you and have a great day";
		
    
		
}
int main()
{
	
	cout<<"------------------------Menu-----------------------"<<endl;
	cout<<"1. Apple \n";
	cout<<"2. Banana \n";
	cout<<"3. Mango \n";
	cout<<"4. Cherry \n";
	cout<<"5. Orange \n";
	
	choice();
	
		
		
	return 0;
}
