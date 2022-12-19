#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],temp1;
	int i,n=0,len=0,temp;
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
	
	
	char str2[100];
	
	strcpy(str2,str);  // comparision
	
	
	n=strlen(str);
	
	for(i=0;i<=n/2;i++)   // swap and reverse
	{
		temp1=str[i];
		str[i]=str[n-1-i];
		str[n-1-i]=temp1;
	}
	
	if(strcmp(str2,str)==0)
	{
		printf("\nString is palindrom");
	}
	else
	{
		printf("\nString is not palindrom");
	}
	return 0;
}
