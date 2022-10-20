#include<stdio.h>

int main ()
{
	int num ,i ,fact ;
	printf("Enter a number\n");
	scanf("%d",&num);
	fact = 1 ;
	for (i = num ; i > 0 ; i--)
	{
		fact = fact * i ;
		
	}
	printf("%d",fact);
	return 0 ;
}
