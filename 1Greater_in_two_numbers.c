#include<stdio.h>
void main()
{
	int num1 , num2 ;
	printf("Enter the first number :");
	scanf("%d",&num1);
	
	printf("Enter the Second Number :");
	scanf("%d",&num2);
	
	if (num1 > num2)
	{
		printf("First number is greater than second : %d",num1);
	}
	else if(num1 < num2)
	{
		printf("Second number is greater than first : %d",num2);
	}
	else
	{
		printf("Number is equal");
	}
	
	
}
