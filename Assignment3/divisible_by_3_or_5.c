#include<stdio.h>

int main ()
{
	int num ;
	puts ("Enter a number\n");
	scanf("%d",&num);
	printf("%d\n",num);
	
	if(num % 3 == 0 || num % 5 == 0)
	{
		puts("Correct Input");
	}
	else 
	{
		puts("Wrong Input");
	}
	return 0 ;
	
	
}
