//Max from given number
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
