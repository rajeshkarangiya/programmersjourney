/* Enter string : i have 5 pens and 2 books
   No. of vowels:
   no. of Consonants:
   space:
   */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,v=0,s=0,c=0,d=0;
	
	printf("Enter string : ");
	gets(str);
	
		
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='S'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='s')
		{
			v++;
		}		
		if(str[i]==' ')
		{
			s++;
		}
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			c++;			
		}
		if(str[i]>='0' && str[i]<='9')
		{
			d++;
		}		
	}
	printf("No. of Vowels = %d \n",v);
	printf("No. of Space = %d \n",s);
	printf("No. of Consonance = %d\n",c);
	printf("No. of digits = %d",d);
	
 return 0;
}

