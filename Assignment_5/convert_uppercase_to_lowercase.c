#include<stdio.h>
int main()
{
	char ch ;
	
	printf("Enter a characrer\n");
	scanf("%c",&ch);
	
	printf("%c\n",ch);
	
	if(ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32 ;
		printf("%c",ch);
	}
	else if(ch >= 'A'  && ch <= 'Z')
	
	{
		printf("%c is in upper case",ch);
	}
	else 
	{
		printf("Wrong input");
	}
	return 0 ;
	
}
