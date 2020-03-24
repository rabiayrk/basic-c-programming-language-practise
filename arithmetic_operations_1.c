#include <stdio.h>
#include <math.h>

int main() {
    
    // In arithmetic operations, numbers has priority from left to right.
    
    printf("Basic Arithmetic Operations\n\n");
    
    int a=10;
    int b=-3;
    
    printf("Sum: %d \n", a+b);
    printf("Sub: %d \n", a-b);
    printf("Product: %d \n", a*b);
    printf("Division: %d \n", a/b);
    printf("Remainder: %d \n", a%b);

    printf("\n\n");
    
    printf("Example : Finding Average of Taken Numbers");
    
    printf("\n");
    
    int x,y,z,d,e;
    float average;
    
    printf("Please enter five numbers:\n");
    scanf("%d %d %d %d %d", &x,&y,&z,&d,&e);
    
    average = (x+y+z+d+e)/5;
    
    printf("Average: %.2f", average);
    
    return 0;
    }
