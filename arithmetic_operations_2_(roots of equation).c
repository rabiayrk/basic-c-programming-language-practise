#include <stdio.h>
#include <math.h>

int main(){
    
    //Finding root of the equation : ax^2 + bx + c
    
    //Equation's delta : b^2 - 4*a*c
    //x1 = -b + (square root of delta) / 2*a
    //x2 = -b - (square root of delta) / 2*a
    
    int a,b,c;
    
    float delta;
    float x1,x2;
    
    printf("Enter the numbers:\n");
    scanf("%d %d %d", &a,&b,&c);
    
    delta= b*b - 4*a*c;
    x1= (-b + (sqrt(delta)))/2*a;
    x2= (-b - (sqrt(delta)))/2*a;
    
    printf("Equation's roots\nx1: %f and x2: %f", x1,x2);
    
    return 0;
    }
