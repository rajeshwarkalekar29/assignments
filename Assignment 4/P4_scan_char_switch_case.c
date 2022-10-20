#include<stdio.h>

int main ()

{
	char ch ;
	
	printf("Enter a character\n");
	scanf("%c",&ch);
	
	printf("%c\n",ch);
	
	switch (ch)
	{
		case 'a' :		
		case 'A' :printf(" Apple") ;
				break ;
				
		case 'b' :
		case 'B' : printf(" Banana");
				break ;
				
		case 'c' :
		case 'C' : printf(" Cherry");
				break ;
		
		default : printf(" some other fruit");
	}
	
	
	
	return 0 ;
}
