/*
Addition of two mertix
 2  5
 3  4
 
 2  4
 5  2
 
 result
 4  9
 8  6
 */
 
 #include<stdio.h>
 int main()
 {
 	int a[2][2]={2,5,3,4};
 	int b[2][2]={2,4,5,2};
 	int i,j;
 	
 	for(i=0;i<2;i++)
 	{
 	  for(j=0;j<2;j++)
	   {
	   	  printf(" %d ",a[i][j]);
	   }
	   printf("\n");	
	}
	printf("\n");
	for(i=0;i<2;i++)
 	{
 	  for(j=0;j<2;j++)
	   {
	   	  printf(" %d ",b[i][j]);
	   }
	   printf("\n");	
	}
	printf("\n");
	for(i=0;i<2;i++)
 	{
 	  for(j=0;j<2;j++)
	   {
	   	  printf(" %d ",a[i][j]+b[i][j]);
	   }
	   printf("\n");	
	}

  return 0;
 }
 

 	
