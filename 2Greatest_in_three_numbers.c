#include<stdio.h>
void main()
{
	int num1, num2 , num3;
	
	printf("Enter the first number :");
	scanf("%d",&num1);
	
	printf("Enter the Second Number :");
	scanf("%d",&num2);
	
	printf("Enter the third number :");
	scanf("%d",&num3);
	
	if(num1 > num2 && num1 > num3)
	{
		printf("First number is greatest : %d",num1);
	}
	else if(num2 > num3 && num2 > num1)
	{
		printf("Second number is greatest : %d",num2);
	}
	else
	{
		printf("Third number is greatest : %d",num3);
	}

}
