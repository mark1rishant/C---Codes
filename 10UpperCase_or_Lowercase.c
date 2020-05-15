#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the Character :");
	scanf("%c",&ch);
	
	if(ch >= 65 && ch <= 90)
	{
		printf("UPPERCASE");
	}
	else if(ch >= 97 && ch <= 122)
	{
		printf("lowercase");
	}
	else
	{
		printf("Not Alphabet");
	}

}
