#include<stdio.h>

int main ()
{
	int num ;
	puts("Enter an integer");
	scanf("%d",&num);
	
	if(num >= 10 && num <= 20 )
	{
		puts("Correct input");
	}
	else 
	{
		puts("Wrong input");
	}
	return 0 ;
}
