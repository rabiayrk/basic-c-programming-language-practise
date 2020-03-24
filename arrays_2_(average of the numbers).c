#include <stdio.h>

int main() {
	
    //Take value from user and store it in array. Then calculate the average of those taken numbers. 
    
    //Then print on the screen.
    
    int i;
    float number[5];
    float sum=0.0;
      
    for (i=0; i<5; i++) 
	  {
      	
        printf("Please enter the number: ");
        scanf("%f", &number[i]);
        sum += number[i];
    }
       
     printf("Number's average: %.2f ", sum / 5);

     return 0;
   }
