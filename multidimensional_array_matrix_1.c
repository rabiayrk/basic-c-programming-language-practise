#include <stdio.h>

int main() {
	
    //Take numbers from user and store them in the multidimensional array (3x4 matrix).
    
    //Print those numbers on the screen.
    
    //Then sum them as shown as below.
    
    /* sum of columns in matrix
    
    1  2  3  4
    5  6  7  8
    9  10 11 12
   +
   --------------
    15 18 21 24 
    */
    
    int matrix[3][4];
    int i,j;
    int sum=0;
    
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) 
		{
            printf("Please enter the number:");
            scanf("%d", &matrix[i][j]);
        }
    }
        
        
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) 
		{
          printf("%d  ",matrix[i][j]);
    	}
            printf("\n");
    }


    for (j=0; j<4; j++) {
        for (i=0; i<3; i++) 
		{
        sum += matrix[i][j];
        }
            printf("%d ",sum);
            sum =0;
	}
	
    return 0;
    
}
