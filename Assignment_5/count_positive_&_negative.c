#include<stdio.h>

int main()
{
	int num, i, num1 = 0 , num2 = 0;
	for (i = 1 ; i<= 10 ; i++)
	{
		printf("\nEnter a number\n");
		scanf("%d",&num);
		
		if(num >=0)
		{
			num1 = num1+1 ;
		}
		
		else if (num < 0) 
		{
			num2 = num2+1 ;
		}
	}
	
	printf(" \ntotal positive numbers  =%d",num1);
	printf("\ntotal negative numbers = %d",num2);
	return 0;
}
