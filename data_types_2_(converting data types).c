#include <stdio.h>

int main()
{
	
	/*
	
	In data structures, automatic (default) converting follow the rule as show as below (right to left) :
	
    short <-- int <-- float <-- double <-- long double
    
    */
    
    // In manual converting =>
    
    float y= 2.232;

    printf("Converting float to int : %d\n",(int)y);
	
	return 0;	
	
	
}



