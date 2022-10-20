#include<stdio.h>

int main()
{
	int num ;
	puts("Enter  a number");
	scanf("%d",&num);
	
	printf("%d",num);
	
	if(num % 2 == 0  &&  num % 3 == 0)
	{
		printf("\n\n%d is Divisible  by 6",num);
	}
	else 
		printf("\n\n%d is not divisible by 6",num);
	
	return 0 ;
}
