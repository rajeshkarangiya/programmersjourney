#include<stdio.h>
int main()
{
    int a=0,b=0,temp=0;
    
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    
    temp=a;
    a=b;
    b=temp;
    
    printf("%d %d",a,b);
    		
 return 0;
}
