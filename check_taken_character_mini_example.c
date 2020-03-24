#include <stdio.h>
int main()
{
    char x;
	printf("Please enter any character : ");
	scanf("%c", &x);

    if ((x>='A' && x<='Z') || (x>='a' && x<='z'))
	{
		if (x>='A' && x<='Z'){
			printf("This is uppercase letter");
		}
		if(x>='a' && x<='z'){
			printf("This is lowercase letter");
		}		
	}
	else if ((x>='!' && x<=',') || (x>='.' && x<='/') || (x>=':' && x<='@') || (x>='[' && x<='_') || (x>='{' && x<='^') || (x>='¡' && x<='€'))
	{
		printf("This is symbol");		
	}
	else 
	{
		printf("Undefined character or not valid");
	}

    return 0;
}
