#include<stdio.h>
int main()
{
	float f=1,num;
	int i;
	printf("Enter a number : ");
	scanf("%f",&num);
	
	for(i=1;i<=num;i++)
	{
		f*=i;
	}
	printf("Factorial of %f is : %.f",num,f);
	
 return 0;
}
