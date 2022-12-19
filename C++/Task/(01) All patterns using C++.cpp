// piramid 
/*
#include<iostream>
using namespace std;
int main()
{
	
	int i;
	int j;
	int k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			cout<<"  ";
		}
		for(k=1;k<=(2*i-1);k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	 return 0;
}
*/
/*
//piramid on left
#include<iostream>
using namespace std;
int main()
{
	int i; //row
	int j;
	int k; //column
	for(i=1;i<=9;i++)
	{
		if(i<=5)
		{
			for(j=1;j<=i;j++)
		    {
			cout<<"* ";
		    }
		    cout<<endl;
		}
		else if(i>5&&i<=9)
	    {
	    	for(k=10;k>i;k--)
	    	{
	    		cout<<"* ";
			}
			cout<<endl;
		}
		
	
	}
	return 0;
}
*/
/*
// Right angle trianle on right
#include<iostream>
using namespace std;
int main()
{
	
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
    	for(j=1;j<=5-i;j++)
    	{
    		cout<<"  ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
 return 0;
}
*/
/*
// Right angle triangle top right corner
#include<iostream>
using namespace std;
int main()
{

	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5-i;j++)
		{
			cout<<"  ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
 return 0;
}
*/
/*
// piramid upside down
#include<iostream>
using namespace std;
int main()
{
	
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5-i;j++)
		{
			cout<<"  ";
		}
		for(k=1;k<=(2*i-1);k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}		
	return 0;

}
*/
/*
//next pattern example 1
#include<iostream>
using namespace std;
int main ()
{
	int i;
	int j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
//different character in between 
#include<iostream>
using namespace std;
int main ()
{
    int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==2&&j==2)
			{
				cout<<" $ ";
			}
			else
			{
				cout<<" * ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
//Right angle triangle of left side
#include<iostream>
using namespace std;
int main ()
{
    int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			if(j<=i)
			{
				cout<<" * ";
			}
		   
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
//ABCD pattern example
#include<iostream>
using namespace std;
int main ()
{
    int i,j;
    
	char k= 'A';
	char a;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				a=k++;
				cout<<" "<<a<<" ";
				
			}
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
//1234 pattern example
#include<iostream>
using namespace std;
int main ()
{
    int i,j;
	int k=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				k++;
				cout<<k<<" ";
				
			}
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
//right angle triangle on top left side
#include<iostream>
using namespace std;
int main()
{
    int i,j;
	for(i=5;i>=0;i--)
	{
		for(j=5;j>=0;j--)
		{
			if(j<=i)
			{
				cout<<" * ";
			}
		}
		cout<<endl;
	}
	
 return 0;
}
*/

