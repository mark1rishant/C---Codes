#include<stdio.h>
void main()
{
	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	if(num % 2 == 0)
	{
		printf("This number is Even Number : %d",num);
	}
	else
	{
		printf("this number is Odd Number : %d",num);
	}
}
