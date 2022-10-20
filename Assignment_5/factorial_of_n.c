#include<stdio.h>
int main()
{
	int num , fact, i ;
	
	printf("Enter a number\n ");
	scanf("%d",&num);
	
	printf("%d\n",num);
	fact = 1 ;
	
	for(i = 1 ; i <= num ; i++)
	{
		fact = fact * i ;
	}
	printf("\n%d! = %d",num, fact);
	
	return 0 ;
}
