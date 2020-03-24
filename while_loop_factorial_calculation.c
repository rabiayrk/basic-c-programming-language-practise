#include <stdio.h>

int main(){
    
    //Take the number from user and then calculate the factorial of it by using while loop.
    
    int x;
    int fact =1;
    
    printf("Please enter the number: ");
    scanf("%d", &x);
    
    printf("From %d to 1: \n", x);
    int a = x;
    while (x != 0){
          
          printf("%d \n", x);
          fact = fact *x;
          
          x--;
          }
    printf("\nFactorial of %d: %d", a, fact);
    
    return 0;
    }
