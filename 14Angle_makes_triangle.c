#include<stdio.h>
void main()
{
	int angle1 , angle2 , angle3 ;
	printf("Enter the first angle of Triangle :");
	scanf("%d",&angle1);
	printf("Enter the second angle of Triangle :");
	scanf("%d",&angle2);
	printf("Enter the third angle of Triangle :");
	scanf("%d",&angle3);
	
	int sum = angle1 + angle2 + angle3 ;
	
	if (sum == 180)
	{
		printf("These angles are the angle of triangle");
	}	
	else
	{
		printf("These angles are not angle of triangle");
	}
}
