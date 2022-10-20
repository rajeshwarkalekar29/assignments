#include<stdio.h>

int main ()
{
	int num ;
	puts ("enter a number ");
	scanf("%d",&num);
	
	printf("\n %d \n",num);
	
	if (num % 2 == 0 && num % 3 == 0)
	{
		printf("%d is divisible by 6",num);
	}
	else 
	{
		printf("%d is not divisible by 6",num);
	}
	return 0 ;
}
