#include<stdio.h>

int main ()
{
	int num1, num2, min ,max , i, sum;
	printf("Enter range\n");
	scanf("%d %d",&num1, &num2) ;
	printf("\n%d %d\n",num1, num2);
	
	if(num1 > num2)
	{
		min = num2 ; max = num1 ;
	}
	else 
	{
		max = num2 ; min = num1 ;
	}
	
	
	i = min ;
	while (i <= max)
	{
		if( i %2 == 0)		
		{
			sum = sum + i ;
			
		}
		i++ ;
	}
	printf("sum of even nunmers = %d",sum);
		
	
	return 0;
}
