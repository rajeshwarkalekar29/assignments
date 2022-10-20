 //10.Scan a number from user.Check if it is prime or not.
#include<stdio.h>
 
 int main()
 {
 	int num, i ;
 	printf("Enter a number\n");
 	scanf("%d",&num);
 	for (i = 2 ;i <= num - 1; i++)
 	{
 		if(num % i == 0)
 		{
 			printf("%d is not a prime number",num);
 			break ;		
		}
		
		
	}
		if (i == num || num == 1)
		{
			printf("%d is a prime number",num);
			
		}
		
		
	return 0;
 }
