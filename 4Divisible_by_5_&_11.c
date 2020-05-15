#include<stdio.h>
void main()
{
	int num ;
	printf("Enter the value : ");
	scanf("%d",&num);
	
	if(num % 5 == 0 )
	{	
		printf("This number is divisible by 5 : %d",num);		
	}
	if(num  % 11 == 0)
	{
		printf("\nThis number is divisible by 11 : %d",num );
	}
	if(num % 5 == 0)
	{
		if(num  % 11 == 0)
		{
			printf("\nThis number is divisible by both 5 and 11");
		}
	}
	else
	{
		printf("\nThis number is not divisible by both 5 and 11");
	}
}
