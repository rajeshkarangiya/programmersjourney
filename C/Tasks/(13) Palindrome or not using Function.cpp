//find out wether number is palindrome or not
#include<stdio.h>
int pal(int n)
{
	int temp,r,re=0;
   temp=n;
   while(n!=0)
   {
   	 re=n%10;
   	 r=r*10+re;
   	 n/=10;
   }
   if(r==temp)
   {
   	printf("Number is Palindrome \n");
   }
   else
   {
   	printf("Number is not Palindrome \n");
   }
   return 0;
}
int main()
{
	int a;
	printf("Enter any number ");
    scanf("%d",&a);
    pal(a);

 return 0;
}

