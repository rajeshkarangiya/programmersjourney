/*Assume that the test results of a batch of students are stored in three different classes.
Class Students are storing the roll number. Class Test stores the marks obtained in two subjects
and class result contains the total marks obtained in the test. The class result can inherit the
details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
		int roll;
		void display()
		{
			cout<<"-----------Data of batch result-------------";
			cout<<endl<<endl<<"Enter Roll number :";
			cin>>roll;
			
		}
};
class test
{
	public:
		int maths,science;
		void display1()
		{
			cout<<endl<<"---------------------------------";
			cout<<endl<<endl<<"Each subject is of 100 marks.";
			cout<<endl<<endl<<"Marks obatined in Maths : ";
			cin>>maths;
			cout<<endl<<"Marks obtained in Science : ";
			cin>>science;
		}
	
};
class result: public student, public test
{
	public:
		void display2()
		{
			cout<<endl<<"--------------Data inserted-----------------";
			cout<<endl<<endl<<"Roll number of student : "<<student::roll;
			cout<<endl<<endl<<"Total marks obtained : "<<test::maths+test::science;
		}
};
int  main()
{
	result obj;
	obj.display();
	obj.display1();
	obj.display2();
	
	
	
 return 0;	
}
