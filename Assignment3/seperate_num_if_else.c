#include<stdio.h>

int main()
{
	int num , i;
	printf("Enter a number\n\n");
	scanf("%d",&num);
	
	for (num = num ;num <10 ; num--)
	{
		num =num / 10;
		num = num % 10;
		printf("%d\n",num);
		
	}
}
