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
//string reverse without using inbuilt function method 2
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i, len=0,temp;
	printf("Enter string : ");
	gets(str);
	
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


