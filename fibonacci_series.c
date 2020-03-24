#include <stdio.h>

int main() {
    
    // The Fibonacci Sequence is the series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21 ...
    
    int secondNumber=1,firstNumber=1;
    int x=0;
    int i;
    
    printf("%d \n%d \n", firstNumber, secondNumber);
    for (i=0; i < 12; i++) {
        
      x = secondNumber;
      secondNumber += firstNumber;
      firstNumber = x;
      
      printf("%d \n", secondNumber);
        }
    
    return 0;
    }
