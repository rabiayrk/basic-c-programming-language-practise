#include <stdio.h>

int main() {
	
    //Difference between break and continue keywords.
    
    int i;
    int number;
    int sum=0;
    
    // key : break
    for(i = 0; i<5; i++) {     
        printf("Please enter the number: (try to KEY : BREAK)\nExit: Please click -1\n");
        scanf("%d", &number);
        
        if(number== -1) {
             break;
             }
        sum += number;
        }
    
    printf("(KEY : BREAK) --> Number's sum: %d\n\n", sum);
    
    
    //key : continue
    for(i = 0; i<5; i++) {     
        printf("Please enter the number: (try to KEY : CONTINUE)\nExit: Please click -1\n");
        scanf("%d", &number);
        
        if(number== -1) {
             continue;
             }
        sum += number;
        }
    
    printf("(KEY : CONTINUE) --> number's sum: %d", sum);
    
    return 0;
    }
