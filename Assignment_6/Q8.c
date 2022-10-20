	//8.Scan 2 numbers from user.Find their LCM.(using while)

#include<stdio.h>

int main ()
{
	int num1, num2, max ,i;
	printf("Enter two numbers\n");
	scanf("%d %d",&num1, &num2);
	max = num1 > num2 ? num1 :num2 ;
	i = max ;
	while (i <= num1 * num2)
	{
		if( i % num1 == 0  && i % num2 == 0)
		{
			printf("LCM =%d",i);
			break ;
		}
			i++ ;
	}
	
	
	return 0 ;
	
}
