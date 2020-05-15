#include<stdio.h>
void main()
{
	int side1 , side2 , side3 ;
	printf("Enter the first side of triangle :");
	scanf("%d",&side1);
	printf("Enter the second side of triangle :");
	scanf("%d",&side2);
	printf("Enter the third side of triangle :");
	scanf("%d",&side3);
	
	int add1 = side1 +side2 ;
	int add2 = side2 +side3 ;
	int add3 = side1 +side3 ;
	
	if(side1 <add2 && side2 < add3 && side3 < add1)
	{
		printf("this sides are valid for a triangle");
	}
	else
	{
		printf("this sides are not valid for a triangle");
	}
}
