#include<stdio.h>
int main()
{
	printf(" Wp for detemining percentage of five subject \n");
	printf("--------------------------------------------- \n");
	printf("Each subject have 100 marks \n");
	
	
	
	float e;
	float m;
	float s;
	float h;
	float c;
	
	
	printf("English = ");
	scanf("%f",&e);
	printf("Maths = ");
	scanf("%f",&m);
	printf("Science = ");
	scanf("%f",&s);
	printf("History = ");
	scanf("%f",&h);
	printf("Computer = ");
	scanf("%f",&c);
	
    float total;
	float per;
	
    total = e+m+s+h+c;
	per = (total/500)*100;
	
	printf("Percentage of five subjects = %0.2f percentage",per);
	
		
	return 0;
}
