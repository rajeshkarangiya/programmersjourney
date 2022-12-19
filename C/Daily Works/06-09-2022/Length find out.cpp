#include<stdio.h>
int main()
{
   char str[20];
   int i, len =0;
   printf("Enter name ");
   scanf("%s",&str);
   
   for(i=0;str[i]!='\0';i++)
   {
   	len++;
   }
   printf("Legth of string : %d",len);
		
	return 0;
}

