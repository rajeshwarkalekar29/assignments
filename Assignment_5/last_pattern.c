/*
AAAAA
*****
BBBBB
*****
CCCCC
*****
*/

#include<stdio.h> 

int main ()

{
	char i, j, k ;
	for (i = 'A' ; i <= 'C' ; i++)
	{
		for(j= 1 ; j <= 5 ; j++)
		{
			printf("%c",i);
			
		}
		printf("\n");
		for (k = 1 ; k <= 5 ; k++)
		{
			printf("*") ;
		}
		printf("\n");
		
	}
	return 0 ;
}
