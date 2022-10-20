#include<stdio.h>

int main()
{
	int num1,num2;
	puts("enter 2 integers");
	scanf("%d %d",&num1,&num2);
	printf("num1 = %d \nnum2 = %d\n",num1,num2);
	
	if(num1 == num2)
	{
		printf("%d = %d",num1, num2);
	}
	else if (num1 > num2)
	{
		printf("%d > %d",num1, num2);
	}
	else
	{
		printf("%d < %d",num1, num2);
	}
	return 0;
}
