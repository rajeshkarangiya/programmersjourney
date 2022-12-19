#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter three number \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("Smaller number is %d ",a);
		}
		else
		{
			printf("Smaller number is %d ",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("Smaller number is %d ",b);
		}
		else
		{
			printf("Smaller number is %d ",c);
		}
	}
			
	
	return 0;
}
