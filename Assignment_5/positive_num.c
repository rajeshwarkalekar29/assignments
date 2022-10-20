#include<stdio.h>
int main ()
{
	int num , i;
	
	for(i = 1 ; i <= 10 ; i++)
	{
		printf("\nEnter a number\n");
		scanf("%d",&num);
		if(num >= 0)
		{
			printf("%d is positive",num);
		}
		else if (num < 0)
		{
			printf("%d is negative",num);
		}
	}
	return 0 ;
}
