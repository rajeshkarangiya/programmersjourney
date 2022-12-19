#include<stdio.h>
int main()

{
	int i=1;
	int a;
	int b;
	int hc;
	char ch;
	
	here:
	printf("---------------Menu---------------- \n");
	printf("1. Addition \n");
	printf("2. Substraction \n");
	printf("3. Multiplication \n");
	printf("4. Division \n");
	printf("5. Modulo \n");
	printf("6. Exit \n");
	
	printf("Enter two number : ");
	scanf("%d %d",&a,&b);

	while (i!=0)
	{
		printf("Enter Choice between 1 to 6 : ");
	    scanf("%d",&hc);
	
		switch(hc)
		{
			case 1:
			printf("Addition = %d\n",a+b);
			break;
			
		case 2:
			printf("Substraction = %d\n",a-b);
			break;
			
		case 3:
			printf("Multiplication = %d\n",a*b);
			break;
			
		case 4:
			printf("Division = %d\n",a/b);
			break;
			
		case 5:
			printf("Module = %d",a%b);
			break;
			
		case 6:
			break;
			
		default:
			printf("Invalid Input!!");
			break;
			
		}
		break;
	}
	fflush(stdin);
	printf("\nDo you want to continue Press 'y' for yes and 'n' for no :  ");
	scanf("%C",&ch);
	
	while(ch=='y'||ch=='Y')
	{
		goto here;
	}
	while(ch=='n'||ch=='N')
	{
		printf("Thank you");
		break;
	}
	
	return 0;
}
