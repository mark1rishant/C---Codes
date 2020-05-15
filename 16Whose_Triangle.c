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
	
	if(side1 == side2 && side2 == side3 && side1 == side3)
	{
		printf("This is equatorial Triangle");
	}
	else if(side1 == side2 || side2 == side3)
	{
		printf("This is isosceles triangle");
	}
	else
	{
		printf("this is scalene Triangle");
	}
}
