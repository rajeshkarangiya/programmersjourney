//find out wether string is palindrome or not using string
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],temp;
	int n=0,i;
	
	printf("Enter the string : ");
	gets(str1);
	
	char str2[100];
	
	strcpy(str2,str1);  // comparision
	
	
	n=strlen(str1);
	
	for(i=0;i<=n/2;i++)   // swap and reverse
	{
		temp=str1[i];
		str1[i]=str1[n-1-i];
		str1[n-1-i]=temp;
	}
	
	if(strcmp(str2,str1)==0)
	{
		printf("String is palindrom");
	}
	else
	{
		printf("String is not palindrom");
	}
   return 0;
}

