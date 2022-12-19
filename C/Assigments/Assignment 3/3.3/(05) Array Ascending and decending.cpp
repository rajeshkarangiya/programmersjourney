#include<stdio.h>
int main()
{
	int a[5];
	int i,j,temp=0,ch;
	printf("Enter Five number : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	here:
	printf("\nFor Asending order press 1 else for desending order press 2 :");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		for(i=0;i<=5;i++)
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
		
		printf("\n\nAns\n\n");
		for(i=0;i<5;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	else if(ch==2)
	{
		for(i=0;i<=5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			
		}
		
		printf("\n\nAns\n\n");
		for(i=0;i<5;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	else
	{
		printf("Invalid input!!.... Enter again");
		goto here;
	}
		
	
 return 0;
}

