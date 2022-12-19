// Function without return type & without parameter
/*#include<stdio.h>
void my_fun();

int main()
{
	printf("This is a main function \n");
	my_fun();
	
	return 0;
}
void my_fun()
{
	printf("This is my function");
}
*/
// Function without return type & with parameter
/*#include<stdio.h>
void my_fun(int a)
{
	printf("A = %d",a);
}
int main()
{ 
  printf("This is a main function \n");
  my_fun(12);
  
  return 0;

}
*/
//Function with return type & with parameter
/*
#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int n1,n2;
	
	printf("Enter two number \n");
	scanf("%d %d",&n1,&n2);
	
	printf("Addition = %d",add(n1,n2));
	return 0;
	
}
*/
/*
//Function with return type & with parameter
#include<stdio.h>
int add()
{
	int n1,n2;
	printf("Enter two number :");
	scanf("%d %d",&n1,&n2);
	
	return n1+n2;
}
int main()
{
	printf("Addition = %d", add());
	return 0;
}
*/
/*
// Recursion Function (factorial Example)
#include<stdio.h>
 int fact(int num)
 {
 	if(num<=0)
 	{
 		return 1;
	}
	return num*fact(num-1);
 }
 int main()
 {
 	int a;
 	
 	printf("Enter a number : ");
 	scanf("%d",&a);
 	
 	printf("Factorial of %d is : %d",a,fact(a));
 	
 	return 0;
 }
 */
 /*
// factorial simple example
#include<stdio.h>
int main()
{
	int i,num,f=1;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		f*=i;
	}
	printf("Factorial of %d is : %d",num,f);
	return 0;
}
*/


