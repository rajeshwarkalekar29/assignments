#include<stdio.h>

int main()
{
	int num1, num2, choice;
	
	printf("enter 2 intrgers\n");
	scanf("%d %d",&num1, &num2);
	
	printf("Enter a choice\n1 = Add\n2 = subt\n3 = multi\n4 = div\n ");
	scanf("%d",&choice);
	
	switch (choice)
	 {		case 1 : printf("addition = %d",num1 + num2);
				break ;
				
		case 2 : printf("subtraction = %d",num1 - num2);
				break ;
				
		case 3 : printf("multiplicarion = %d",num1 * num2);
				break ;
				
		case 4 : printf("division = %d",num1 / num2);
				break ;
				
		default : printf("Wrong input");
		
	}
	
	printf("\n\tafter loop");
	
	return 0 ;
	
	
}
