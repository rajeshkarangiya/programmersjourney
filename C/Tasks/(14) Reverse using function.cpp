#include<stdio.h>
int rev(int n)
{
   int r,re=0;
   
   while(n>0)
   {
   	 re=n%10;
   	 r=r*10+re;
   	 
	 n/=10;
   }
		
	return r;
}
int main()
{
	int a;
    printf("Enter any number ");
    scanf("%d",&a);
    
    printf("%d",rev(a));
    
 return 0;
}

