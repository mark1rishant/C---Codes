#include<stdio.h>
void main()
{
	int amount , note ;
	printf("Enter the total amount :");
	scanf("%d",&amount);
	
	printf("Enter which note is available to you :");
	scanf("%d",&note);
	
	int result = amount / note ;
	printf("You hava available %d rs %d notes",note,result);	

}
