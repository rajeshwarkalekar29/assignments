	//9.Scan 2 numbers from user.Find their GCD.
#include<stdio.h>

int main  ()
{
	int num1, num2, i, min ;
	printf("Enter two numbers\n");
	scanf("%d %d",&num1, &num2);
	
	min =  num1 < num2 ? num1 : num2 ;
	
	for(i = min ; i >= 1 ; i--)
	{
		if(num1 % i == 0 && num2 % i == 0)
		{
			printf("GCD = %d",i);
			break ;
		}
	}
	return 0 ;
}
