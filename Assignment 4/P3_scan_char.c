#include<stdio.h>
int main()
{
	char ch ;
	printf("Enter a character\n");
	
	scanf("%c",&ch);
    printf("%c\n",ch);
    
    if (ch == 'a'   ||   ch == 'A')  
    {
    	printf("APPLE");
	}
	else if (ch == 'b'	||	ch == 'B')
	{
		printf("BANANA");
	}
	else if(ch == 'c'	||	ch == 'C')
	{
		printf("CHERRY");
	}
	else 
	{
		printf("Some other fruit");
	}
	
	
	return 0 ;
}
