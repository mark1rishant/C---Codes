#include<stdio.h>
void main()
{
	int num ;
	printf("Enter the value :");
	scanf("%d",&num);
	
	if (num > 0)
	{
		printf("Entered value is positive : %d",num);
	}
	else if (num < 0)
	{
		printf("Entered value is negative : %d",num);
	}
	else
	{
		printf("Entered value is zero : %d",num);
	}
}
