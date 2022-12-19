//string reverse without using inbuilt function method 1
/*#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i, len=0;
	printf("Enter string : ");
	scanf("%s",&str);
	
	len=strlen(str);
	for(i=len;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
*/
/*
//string reverse without using inbuilt function method 2
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i, len=0,temp;
	printf("Enter string : ");
	scanf("%s",&str);
	
	len=strlen(str);
	
	for(i=0;i<=len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
	printf("\nReverse string = %s",str);
	return 0;
}
*/
/*
//string length
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,temp,len=0;
	
	printf("Enter string :");
	gets(str);
	
	len = strlen(str);
	
	printf("Length of string is : %d",len);
	
	return 0;
}
*/
//copy string 
/*
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],str2[20];
	printf("Enter string = ");
 
	gets(str1);
	
	strcpy(str2,str1);
	
	printf("String : %s",str2);
	
	return 0;
}
*/
/*
//Compare Strings
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	
	printf("Enter  first string :");
	gets(str1);
	
	printf("Enter second string :");
	gets(str2);
	
	if(strcmp(str1,str2)==0)
	{
		printf("Both are same");
	}
	else
	{
		printf("Not same");
	}
	
	return 0;
}
*/
/*
//to add two strings strcat()
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	
	printf("Enter first string : ");
	gets(str1);
	printf("Enter second string : ");
	gets(str2);
	
	printf("Final string : %s",strcat(str1,str2));
	
	return 0;
	
}
*/
//to reverse any string
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	
	printf("Enter string : ");
	gets(str1);
	
	printf("Reverse string : %s",strrev(str1));
	
	return 0;
	
}
