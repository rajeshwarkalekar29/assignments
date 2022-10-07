#include<stdio.h>
int main()
{
	int c,f ;
	printf("Enter temp in celcius");
	scanf("%d",&c);
	// Foormula
	f = c*1.8+32;
	printf("c = %d \n f = %d ",c, f);
	return 0;
	
	
}