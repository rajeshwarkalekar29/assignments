#include<stdio.h>
int main ()
{
	int num;
	puts("Enter 1 ,2 , or 3");
	scanf("%d",&num);
	
	if (num == 1)
	{
		printf("ONE");
	}
	else if(num == 2)
	{
		printf("TWO");
	}
	else if (num == 3)
	{
		printf("THREE");
	}
	else 
	{
		printf("Wrong input");
	}
	return 0;
}
