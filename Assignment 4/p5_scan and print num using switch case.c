#include<stdio.h>
int main ()
{
	int num;
	printf("Enter 1, 2 or 3\n");
	scanf("%d",&num);
	
	
	switch(num)
	{
		case 1 : printf("ONE");
				 break;
		case 2 : printf("TWO");
				 break;
		case 3 : printf("THREE");
				 break;
		default : printf("Wrong input");
	}
	return 0;
}
