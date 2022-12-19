/*
//1.
#include<stdio.h>
int main()
{
	int i;
	
	for(i=972;i>=897;i--)
	{
		printf("%d \n",i);
	}

 return 0;
}
*/
/*	
//2. 
#include<stdio.h>
int main()
{
	int i,n,e=0,o=0,esum,osum;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter number 10 times : ");
		scanf("%d",&n);
		if(n%2==0)
		{
			e++;
			esum+=n;
			
		}
		else
		{
			o++;
			osum+=n;
		}	
	}
	printf("Total even numbers are : %d \n",e);
	printf("Total Odd numbers are : %d\n",o);
	printf("Total sum of even numbers are : %d \n",esum);
	printf("Total sum of Odd numbers are : %d \n",osum);
	
 return 0;
}
*/
/*
//3.Table
#include<stdio.h>
int main()
{
	int l;
	int n;
	
	printf("you want table of : ");
	scanf("%d",&n);
	
	 for(l=1;l<=10;l++)
	 {
	 	printf("%d x %d = %d \n",n,l,n*l);
	 }
	 
	 return 0;
}
*/
/*
//4.Factorial
#include<stdio.h>
int main()
{
	
	int i,n,f=1;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
		
	}
	printf("Factorial = %d",f);
	
 return 0;
}
*/
/*
//5. Fibonacci series
#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("Enter number :");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
    	printf(" %d ",a);
    	c=a+b;
    	a=b;
    	b=c;
	}
		
	return 0;
}
*/
/*
//6. Reverse value
#include<stdio.h>
int main()
{
   int n,r;
   printf("Enter any number ");
   scanf("%d",&n);
   
   while(n>0)
   {
   	 r=n%10;
   	 printf("%d",r);
   	n=n/10;
   }
		
	return 0;
}
*/
/*
//7. max from given number
#include<stdio.h>
int main()
{
	int n[5],i,max=0,min=0;
	
	printf("Enter five number : ");
	
	for(i=1;i<=5;i++)
	{		
		scanf("%d",&n[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(n[i]>max)
		{
			max=n[i];
		}
				
	}
	printf("Max = %d",max);
			
	return 0;
}
*/
/*
//8. summation of given number
#include<stdio.h>
int main()
{
	int n[5],i,sum=0;
	
	printf("Enter five number : ");
	
	for(i=1;i<=5;i++)
	{		
		scanf("%d",&n[i]);
	}
	for(i=1;i<=5;i++)
	{
		sum+=n[i];
	}
	printf("Summation = %d",sum);
	
	return 0;
}
*/
/*
//9. summation of first and last number
#include<stdio.h>
int main()
{
	int n[5],i,sum=0;
	
	printf("Enter five number : ");
	
	for(i=1;i<=5;i++)
	{		
		scanf("%d",&n[i]);
	}
	
	sum=n[1]+n[5];
	
	printf("Summation = %d",sum);
	
	return 0;
}
*/
//10. All Patterns
		//1
		/*
		#include<stdio.h>
		int main()
		{
			int k=0,l=1,i,j;
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=i;j++)
				{
					if(j<=i);
					{
						if(j%2==0)
						{
							printf("%d ",k);
						}
						else
						{
							printf("%d ",l);				
						}			
					}
					
				}
				printf("\n");
			}
		  return 0;
		}
		*/
		//2
		/*
		#include<stdio.h>
		int main()
		{
			int i,j,k;
			for(i=1;i<=5;i++)
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
		*/
		//3
		/*
		#include<stdio.h>
		int main()
		{
			char k='A',i,j;
			char a;
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=i;j++)
				{
					if(j<=i);
					{
						a=k++;
						printf("%c ",a);
					}
					
				}
				printf("\n");
			}
		  return 0;
		}
		*/
		//4
		/*
		#include<stdio.h>
		int main()
		{
			int k=0,i,j;
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=i;j++)
				{
					if(j<=i);
					{
						k++;
						printf("%d ",k);
					}
					
				}
				printf("\n");
			}
		  return 0;
		}
		*/
		//5
		/*
		#include<stdio.h>
		int main()
		{
			char a,l='A';
			int i,j,k;
			for(i=0;i<=5;i++)
			{
				for(j=0;j<=i;j++)
				{
					a=l++;
					printf("%c ",a);						
				}
				l='A';
				
				for(k=1;k<=5;k++)
				{
					printf("  ");
				}
				printf("\n");
			}
		  return 0;
		}
		*/
		//6
		/*
		#include<stdio.h>
		int main()
		{
			int i,j,k;
			
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
		 return 0;
		}
		*/
