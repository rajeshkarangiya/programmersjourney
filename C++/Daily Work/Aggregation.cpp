// Aggregration
#include<iostream>
using namespace std;

class Address
{
	public:
		string state;
		string city;
		int pin;
		
		//constructor 
		Address(string state, string city, int pin)
		{
			this->state=state;
			this->city=city;
			this->pin=pin;
		}
};
class employee
{
	public:
		string name;
		int id;
		Address*address;
		
		//constructor
		employee(string name, int id, Address*address)
		{
			this->name=name;
			this->id=id;
			this->address=address;
		}
		void display()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Id = "<<id<<endl;
			cout<<"State = "<<address->state<<endl;
			cout<<"City = "<<address->city<<endl;
			cout<<"Pin = "<<address->pin<<endl;
		}
};
int main()
{
	Address A("Gujarat", "Ahmedabad", 123456);
	employee E("ABC", 21, &A);
	
	E.display();
	
 return 0;
}
