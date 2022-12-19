#include<stdio.h>
int main()
{
	int b;
	int h;
	int area;
	
	printf("WP for finding the area of Triangle \n");
	printf("------------------------------------ \n");
	printf("Given base (in m) = ");
	scanf("%d",&b);
	printf("Given height (in m) = ");
	scanf("%d",&h);
	
	area = 0.5*b*h;
	
	printf("Area of Rectangle = %d meter square",area);
	
	return 0;
}
