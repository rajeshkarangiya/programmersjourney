/*
#include<stdio.h>
int main()
{
	int a=12,b=3,space;
	printf("values berfore swap \n");
	printf("A = %d \n",a);
	printf("B = %d",b);
	space=a;
	a=b;
	b=space;
	printf("\nValues after swap \n");
	printf("A = %d \n",a);
	printf("B = %d",b);
	
	return 0;
}
*/
//Example 2
#include<stdio.h>
int main()
{
	int a[5],i,j,temp=0;
	for(i=0;i<5;i++)
	{
		printf("Enter any five number :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n Answer \n");
	for(i=0;i<5;i++)
	{
		printf("%d \n",a[i]);
	}
	return 0;
}
