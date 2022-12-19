//length of string without using inbuilt function
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,len=0;
	printf("Enter a string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("String length = %d",len);
 return 0;
}
