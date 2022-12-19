// Array Example 1
/*
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	printf("Number = %d",a[2]);
	return 0;
}
*/
// Array Example 2
/*
#include<stdio.h>
int main()
{
	int a[5];
	int i;
	for (i=0;i<5;i++)
	{
		printf("Enter number : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d \n",a[i]);
	}
	
 return 0;
}
*/
/*
// 2D array matrix
#include<stdio.h>
int main()
{
	int a[2][3]={{2,3,4},{5,6,7}};
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
	
 return 0;
}
*/
// Array and function relation
/*
#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int a[5]={12,4,45,6,32};
	printf("Addition = %d",add(a[2],a[3]));
	return 0;
}
*/
/*
//Example 2
#include<stdio.h>
int add (int num[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum+=num[i];
	}

	return sum;
}
int main()
{
		int a[5]={12,2,36,18,9};
		printf("Addition = %d",add(a));
		
 return 0;	
}
*/
	
