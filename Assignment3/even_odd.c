#include<stdio.h>

int main ()
{
	int num;
	puts("Enter a number\n");
	scanf("%d",&num);
	
	
	if (num % 2 == 0)
	{
		printf("%d is Even",num);
	}
	else 
	{
		printf("%d is oddd",num);
	}
	
	return 0;
}
