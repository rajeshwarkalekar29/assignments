#include<stdio.h>

int main ()

{
	int l, b, r, choice ;
	
	printf("Enrer choice\n1 = area of rectangle\n2 = area of circle\n3 = perimeter of rectangle\n4 = perimeter of circle\n");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1 :printf("Enter length and breadth\n ") ;
				scanf("%d %d",&l, &b);
				
				printf("Area = %d",l * b);
				break ;
				
		case 2 :printf("Enter radius\n");
				scanf("%d",&r);
				printf("Area = %f",3.14 * (float)r * r);
				break ;
		
		case 3 : printf("Enter length and breadth\n ",l, b);
				 scanf("%d %d",&l, &b);
				 printf("perimeter = %d",(l + b)*2);
				 break ;
				 
		case 4 : printf("Enter radius\n");
				 scanf("%d",&r);
				 printf("Perimeter = %f",2 * 3.14 * (float)r);
				 break ;
		default : printf("Sorry !! wrong input") ;
		}
		
		
		return 0 ;
}

