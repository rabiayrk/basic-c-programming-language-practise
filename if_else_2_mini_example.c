#include <stdio.h>

int main() {
    
    // Mini if - else example : Student school average
    int a,b,c;
    float average;
    
    printf("Please enter your three grade: ");
    scanf("%d %d %d", &a,&b,&c);
    
    average= (a+b+c)/3;
    
    if (average >= 85) {
                 printf("Your average: %f , you passed with AA!", average);
                 }
    else if (85>average && average>=70){
         printf("Your average: %f , you passed with BB!", average);
         }
    else if (70>average && average>=60){
         printf("Your average: %f , you passed with CC!", average);
         }
    else {
         printf("Your average: %f , you failed.", average);
         }
    
    return 0;
    }
