#include<stdio.h>

int main ()


{
	char ch ;
	printf("Enter  Gender\n");
	scanf("%c",&ch);
	
	printf("\n%c\n",ch);
	
	switch(ch)
	{
		case 'm' :
		case 'M' : printf("Male");
				break ;
				
		case 'f' :
		case 'F' :printf("Female");
				break ;
		
		default : printf("Wrong input");
	}
	return 0 ;
}
