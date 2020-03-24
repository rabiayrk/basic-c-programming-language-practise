#include <stdio.h>

int main(){
	
	/*
	
	Loop is used for the same operations repetition. And generally three type of loop is used:
		
	-For loop
	-While loop 
	-Do-While loop
	
	Each loop should take a condition and according to this condition, 
	if it is true, same operation will continue between code blocks.
	
	*/
    
    //Take a number from user and then calculate its number's sum.
    
    //And also print digit of the number on the screen by using do-while loop.

	//Loop's condition is "number should be bigger than 0".
	
    int x,digit=0,sum=0;    
    
    printf("Please enter the number: ");
    scanf("%d",&x);
    
    do {
        
    sum += (x % 10);
    digit ++;
    x = x/10;    
      
        }
    while (x > 0);
    
    printf("Number's sum: %d \nDigit: %d", sum, digit );
    
    return 0;
    }
