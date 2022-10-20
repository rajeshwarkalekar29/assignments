#include<stdio.h>

int main()

{
	char ch ;
	
	puts(" Enter a character ");
	scanf("%c",&ch);
	
	printf("\n%c\n",ch);
	
	if (ch == 'a' ||  ch == 'A')
	{
		printf("apple");
	}
	else if(ch == 'b'   ||   ch == 'B')
	{
		puts("banana");
	}
	
	else
	{
		printf("some other fruit");
	}
	
		return 0;
		
	
	

	
}
