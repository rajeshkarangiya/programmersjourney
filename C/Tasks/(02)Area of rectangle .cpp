#include<stdio.h>
int main()
{
	int w;
	int l;
	int area;
	
	printf("WP for finding the area of rectangle \n");
	printf("------------------------------------ \n");
	printf("Given width (in m) = ");
	scanf("%d",&w);
	printf("Given length (in m) = ");
	scanf("%d",&l);
	
	area = w*l;
	
	printf("Area of Rectangle = %d meter square",area);
	
	return 0;
}
