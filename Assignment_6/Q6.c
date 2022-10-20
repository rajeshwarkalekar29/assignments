#include<stdio.h>

int main ()
{
	int num1, num2, i ;
	int max ;
	printf("Enter two positive numbers \n");
	scanf("%d %d",&num1, &num2);
	
	max  = num1 > num2 ? num1 : num2 ;
	for (i = max ;i <= num1 * num2 ; i++)
	{
		if(i % num1 == 0 && i % num2 == 0)
		{
			printf("\nLCM = %d",i);
			break ;
		}
	
	}
	printf("\nAfter loop");
	return 0 ;
}
