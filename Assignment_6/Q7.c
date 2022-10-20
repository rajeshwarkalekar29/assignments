#include<stdio.h>

int main ()
{
	int num, rem ,sum ;
	printf("Enter a number");
	scanf("%d",&num);
	sum = 0 ;
	while(num > 0)
	{
		rem = num % 10;
		num = num / 10 ;
		sum = sum + rem ;
	}
	printf("sum of digits = %d", sum);
	return 0 ;
}
