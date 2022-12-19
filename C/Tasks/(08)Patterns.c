#include<stdio.h>
int main()
{
	/*
	int i;
	int j;
	int k;
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=20-i;j++)
		{
			printf("  ");
		}
		for(k=1;k<=(2*i-1);k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	*/
	/*
	int i; //row
	int j;
	int k; //column
	for(i=1;i<=9;i++)
	{
		if(i<=5)
		{
			for(j=1;j<=i;j++)
		    {
			printf("* ");
		    }
		    printf("\n");
		}
		else if(i>5&&i<=9)
	    {
	    	for(k=10;k>i;k--)
	    	{
	    		printf("* ");
			}
			printf("\n");
		}
		
	
	}
	*/
	/*
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
    	for(j=1;j<=5-i;j++)
    	{
    		printf("  ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	*/
	/*
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5-i;j++)
		{
			printf("  ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	*/
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5-i;j++)
		{
			printf("  ");
		}
		for(k=1;k<=(2*i-1);k++)
		{
			printf("* ");
		}
		printf("\n");
	}		
	return 0;

}
/*
//next pattern example
#include<stdio.h>
int main ()
{
	int i;
	int j;
	/*
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	*/
	/*
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			if(i==2&&j==2)
			{
				printf(" $ ");
			}
			else
			{
				printf(" * ");
			}
			
		}
		printf("\n");
	}
	*/
	/*
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=20;j++)
		{
			if(j<=i)
			{
				printf(" * ");
			}
		   
		}
		printf("\n");
	}
	*/
	/*
	char k= 'A';
	char a;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				a=k++;
				printf(" %c ",a);
				
			}
		}
		printf("\n");
	}
	*/
	/*
	int k=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				k++;
				printf(" %d ",k);
				
			}
		}
		printf("\n");
	}
	*/
	/*
	for(i=10;i>=0;i--)
	{
		for(j=10;j>=0;j--)
		{
			if(j<=i)
			{
				printf(" * ");
			}
		}
		printf("\n");
	}
	*/
	/*
	for(i=1;i<=10;i++)
	{
		if(i<=5)
		{
		for(j=1;j<=5;j++)
		  {
		  	if(j<=i)
		  	{
		  		printf(" * ");
			}
			
		  }
		  printf("\n");
	    }
	    
	    else if (i>=6 && i<=10)
	    {
	        for(j=10;j>=6;j--)
		    {
			  if(j>=i)
			  {
				printf(" * ");
			  }
		    }
		    printf("\n");
		}
	}
		
		

	
	return 0;
}
*/
