#include<stdio.h>
void main()
{
	int year;
	printf("Enter the Year you want to check :");
	scanf("%d",&year);
	
	if(year % 4 == 0)
	{
		printf("The Year you are entered is leap year : %d",year);
	}
	else
	{
		printf("The year you are entered is not leap year : %d",year);
	}
}
