#include<stdio.h>

int main()
{
	int num , i ;
	
	printf("Enter a number\n ");
	scanf(" %d", &num);
	
	printf("%d\n\n",num);
	
	i = 1 ;
	while(i <= num)
	{
		printf("%d\n",i);
		i++ ;
	}
	return 0 ;
}
