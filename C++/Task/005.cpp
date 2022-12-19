/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer.
Data member of batsman. Total runs, Average runs and best performance.
Member functions input data, calculate average runs, Display data. (Single Inheritance)*/

#include<iostream>
#include<string.h>
using namespace std;
class cricketer
{
	public:
		char team1[50]; char team2[50];
		int ch=0, t1=0, t2=0, t1score=0, t2score=0, i, avgt1, avgt2;
		void displaydata()
		{
			cout<<"-------------welcome to cricket tournament------------------";
			cout<<endl<<"          Tournament info\nTotal over : 20 \nTournament timing : 9:00 AM to 6:00 PM ";
			cout<<endl<<"First Team name : ";
			gets(team1);
			cout<<endl<<"Second Team name : ";
			gets(team2);
			for(i=1;i<=3;i++)
			{
				cout<<"Day ("<<i<<")";
				cout<<endl<<"Who got to bat first : ";
				here:
				cout<<endl<<"Press 1 for team "<<team1<< " and"<<" 2 for team " <<team2<<" : ";
				cin>>ch;
				if(ch==1)
				{
					pra:
					cout<<endl<<"Total runs scored by team " <<team1<<" = : ";
					cin>>t1;
					if(t1<=0 || t1>=301)
					{
						cout<<"These scores are not practical. Try again";
						goto pra;
					}
					t1score+=t1;
					pra1:
					cout<<endl<<"Total runs scored by team " <<team2<<" = : ";
					cin>>t2;
					if(t2<=0 || t2>=301)
					{
						cout<<"These scores are not practical. Try again";
						goto pra1;
					}
					t2score+=t2;
					
				}
				else if (ch==2)
				{
					pr:
					cout<<endl<<"Total runs scored by team " <<team2<<" = : ";
					cin>>t2;
					if(t1<=0 || t1>=301)
					{
						cout<<"These scores are not practical. Try again";
						goto pr;
					}
					t2score+=t2;
					pr1:
					cout<<endl<<"Total runs scored by team " <<team1<<" = : ";
					cin>>t1;
					if(t1<=0 || t1>=301)
					{
						cout<<"These scores are not practical. Try again";
						goto pr1;
					}
					t1score+=t1;
				}
				else
				{
					cout<<"Invalid input try again";
					goto here;
					
					
				}
			
			}
			avgt1=t1score/3;
			avgt2=t2score/3;
		}
		
};
class batsman: public cricketer
{
	public:
	
	void total_runs()
	{
		cout<<endl<<"Total runs scored by team "<<cricketer::team1<<" : "<<cricketer::t1score;
		cout<<endl<<"Total runs scored by team "<<cricketer::team2<<" : "<<cricketer::t2score;
	}
	void average_runs()
	{
		cout<<endl<<"Average runs scored by team "<<cricketer::team1<<" : "<<cricketer::avgt1;
		cout<<endl<<"Average runs scored by team "<<cricketer::team2<<" : "<<cricketer::avgt2;
	}
};
int main()
{
	batsman obj1;
	
	obj1.displaydata();
	cout<<endl<<"-------------Match Results-----------------";
	obj1.total_runs();
	obj1.average_runs();
	
 return 0;
}

