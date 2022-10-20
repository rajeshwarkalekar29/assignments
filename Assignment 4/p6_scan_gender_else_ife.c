#include<stdio.h>

int main ()

{
	char ch ;
	printf (" Enter gender\n ");
	scanf("%c",&ch);
	
	printf("%c\n\n",ch);
	
	if(ch == 'm'	||	ch == 'M')
	{
		printf(" Male");
	}
	else if(ch == 'f'	||	ch == 'F')
	{
		printf(" Female");
		
	}
	else 
	{
		printf(" Wromg input");
	}
	return 0 ;
}
