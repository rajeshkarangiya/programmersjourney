/* Enter string : Hello Good morining
  Enter a character : 
  Frequency of character:
   */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],c;
	int i,f=0;
	
	printf("Enter string : ");
	gets(str);
	
	printf("Enter a character : ");
	scanf("%c",&c);
	
		
	for(i=0;str[i]!='\0';i++)
	{
			
		
		if(str[i]==c)
		{
			f++;			
		}
				
	}
	printf("Frequency of Character = %d\n",f);
	
	
 return 0;
}

