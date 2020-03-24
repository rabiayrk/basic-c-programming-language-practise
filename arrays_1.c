#include <stdio.h>

int main() {
	
    /* 
	Array is used for store the values (integer, float, char ...).

    You can store integer, float, char ... data types in array 
	but inside of array, numbers should be same data type.
	
	And the first number index start from zero in array. 
	So in the below, 1 is the zero number, 2 is the first number, 3 is the second number...
    */
    
    //Print on the screen the desired element in the given series.
    
    int numbers[]= {1,2,3,4,5};
        
    int i;  
    for (i=0; i<5 ;i++){
	      
        printf("%d ", numbers[i]); 
		     
        }
    
    printf("\n\nThird number: %d",numbers[2]);
    
    return 0;
    }
