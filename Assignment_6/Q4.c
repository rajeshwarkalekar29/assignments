/* Keep scanning a number from user until user enters 0.
User may enter positive and negative numbers.Print addition of only negative numbers.*/

#include<stdio.h>

int main ()
{
	int num, sum = 0 ;
	while(3>2)
	{
		printf("Enter a number\n");
		scanf("%d",&num);
		
		if(num ==  0)
		{
			break ;
		}
		if(num > 0)
		{
			sum = sum + num ;
		}
	}
	printf("sum = %d",sum);
	return 0 ;
}

