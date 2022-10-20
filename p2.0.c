#include<stdio.h>
int main ()
{
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	
	if (num%2 == 0 )
	{
		if (num%3 == 0)
		{
			printf("%d is Divisible by 6",num);
		}
		else	
	 	{
	 		printf("Not divisible by 6");
		}
		
	}
	
	else 
	{
		printf("Not divisible by 6");
		
	}
	return 0;
}
