#include<stdio.h>

int main()


{
	int l,b;
	//length = l    breadth = b
	puts("Enter length and width");
	scanf("%d  %d",&l, &b);
	
	printf("%d\t %d\n",l,b);
	
	if(l == b)
	{
		printf("square");
	}
	else 
	{
		printf("rectangle");
	}
	return 0;
}
