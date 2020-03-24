#include <stdio.h>

int main (){
    
    /* 
    
    Mini example for if - else condition: 
    
	If the grade is greater than 70, you passed from course
	but it is not you failed.
    
	*/
    
    // bool : true or false
    // Mini example of if - else conditions
    
    int grade;
    
    printf("Please enter your grade: ");
    scanf("%d", &grade);
    
    if (grade > 70){
          
          printf("You passed...)");
          
          }
    else {
         
         printf("You failed...");
         
         }

    return 0;
    }
