#include<stdio.h>

int main()
{
	int num, fact, i ;
	printf("ENTER a number\n");
	scanf("%d",&num);
	
	printf("%d\n",num);
	fact = 1 ;
	for(i = num ; i > 0 ; i--)
	{
		fact = fact * i ;
	}
	printf("%d",fact);
	return 0 ;
	
}
