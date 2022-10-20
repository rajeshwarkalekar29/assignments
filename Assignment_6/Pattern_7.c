#include<stdio.h>

int main()
{
	char i, j, k ;
	for (i = 'E'; i >= 'A' ; i-- )
	{
		for(k= 'A' ; k <= i-1 ; k++)
		{
			printf("-");
			
		}	
		
		for (j = i ; j <= 'E' ; j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0 ;
}
