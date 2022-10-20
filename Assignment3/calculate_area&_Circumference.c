#include<stdio.h>
int main()

{
	int rad;
	float area , cirm ;
	printf("enter radius of circle\n ");
	scanf("%d",&rad);
	
	area = 3.14 * rad * rad ;
	cirm = 2 * 3.14 * rad ;
	printf("\narea = %f\ncircumference = %f",area ,cirm);
	
	if(area >= 50)
	{
	
		area = area - 50 ;
		printf("\narea is %f sq.units greater than 50",area);
	}
	return 0 ;
}
