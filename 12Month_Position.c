#include<stdio.h>
void main()
{
	int opt;
	printf("Enter the Month Number from (1 to 12) : ");
	scanf("%d",&opt);
	
	if (opt == 1)
	{
		printf("January = the days in this month is 31");
	}
	else if(opt == 2)
	{
		printf("February = the days in this month is 28 or 29");
	}
	else if(opt == 3)
	{
		printf("March : the days in this month is 31");
	}
	else if(opt == 4)
	{
		printf("April : the days in this monthe is 30");
	}
	else if(opt == 5)
	{
		printf("May : the days in this month is 31");
	}
	else if (opt == 6)
	{
		printf("June : the days in this month is 30");
	}
	else if(opt == 7)
	{
		printf("July : the days in this month is 31");
	}
	else if(opt == 8)
	{
		printf("August : the days in this month is 31");
	}
	else if(opt == 9)
	{
		printf("September : the days in this month is 30");
	}
	else if(opt == 10)
	{
		printf("October : the days in this month is 31");
	}
	else if(opt == 11)
	{
		printf("November : the days in this month is 30");
	}
	else if(opt == 12)
	{
		printf("December : the days in this month is 31");
	}
	else
	{
		printf("Wrong option choosen");
	}
}
