#include<stdio.h>

int main ()
{
	int num, i;
	printf("Enter a number ");
	scanf("%d",&num);
	
	printf("%d\n\n",num);
	
	while ( num > 0)
	{
		i = num %10;
		
		printf("%d\n",i);
		num = num /10;
		
	}
		return 0 ;

}
