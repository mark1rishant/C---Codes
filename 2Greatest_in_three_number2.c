#include<stdio.h>
void main()
{
	int num1 , num2 , num3 ;
	printf("Enter the First Value :");
	scanf("%d",&num1);
	printf("Enter the Second Value :");
	scanf("%d",&num2);
	printf("Enter the Third Value :");
	scanf("%d",&num3);
	
	if(num1 > num2)
	{
		if(num1 > num3)
		{
			printf("First number is greatest");
		}
	}
	if(num2 > num3)
	{
		if(num2 > num1)
		{
			printf("Second Number is greatest");
		}
	}
	if(num3 > num1)
	{
		if(num3 > num2)
		{
			printf("Third number is greatest");
		}
	}
	
}
