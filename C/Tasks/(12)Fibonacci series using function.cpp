#include<stdio.h>
int fab(int n)
{
    int i,a=0,b=1,c;  
	  
    for(i=0;i<=n;i++)
    {
    	printf(" %d ",a);
    	c=a+b;
    	a=b;
    	b=c;
	}
}

int main()
{
	int p;
	printf("Enter a number : ");
	scanf("%d",&p);
	
	printf("\n Fibonacci series for given element %d is: ",p);
	fab(p);
	
	return 0;
}

