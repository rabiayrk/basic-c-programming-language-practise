#include <stdio.h>

int main() {
    
    /*
    
    a++ : Increase the number +1 after the current operation.
	++a : Increase the number +1 before the current opearetion.
	
    */
    
    //Show the difference between a++ and ++a
    
    int a=5;
    int b=4;
    
    printf("Given numbers : a = %d , b = %d\n\n", a,b);
    
    printf("a++: %d, b++: %d\n", a++,++b);
    printf("a: %d, --b: %d\n", a, --b);
    
    a += b; // same meaning with "a = a + b"
    
    printf("a += b : %d", a);
    
    return 0;
    
    }








