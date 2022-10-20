#include<stdio.h>
int main()

{
	int a, b ;
	int min, max , i;
	printf("Enter a range\n");
	scanf("%d  %d",&a, &b);
	printf(" a = %d  b =  %d\n ", a, b);
	if( a > b)
	{
		max = a ;
		min = b;
	}
	else if (b > a)
	{
		min = a ; 
		max = b ;
	}
		 
		
		i = min ; 
		while(i < max)
		{
			if( i % 2 == 0)
			{
				printf("%d = even\n",i);
			}
			else 
			{
				printf("%d = odd\n",i);
			}
		
		i++ ;
		}
		
	return 0 ;
	

}
