#include<stdio.h>
int main ()
{
	char ch, a ;
	printf("Enter a charecter\n");
	scanf("%c",&ch);
	
	printf("%c\n",ch);
	
	if ( ch  >= 'a' && ch <= 'z')
	{
		printf("%c is lowercase alphabet",ch);
	}
	else if(ch >= 'A'  &&  ch <= 'Z')
	{
		printf("%c is upper case alphabet",ch);
	}
	else
	{
		printf("Wrong input");
	}
	return 0 ;
	
}
