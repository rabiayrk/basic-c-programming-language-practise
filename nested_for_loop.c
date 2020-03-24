#include <stdio.h>

int main(){
    
    //Print nested for loop on the screen.
    
    int i,j;
    
    for (i=0; i<10; i++) {       
        for (j=0; j<3; j++){
        	
        printf("i: %d  j: %d \n", i,j);
        
        }
    }
    
    return 0;
}
