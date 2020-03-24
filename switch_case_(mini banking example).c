#include <stdio.h>

int main(){
    
    /*
	
	Switch - case is a kind of option - condition operation. 
	Inside of switch, operation should be declarated.
	Then, alternative cases defined by using "case" keyword.
	And "default" keyword is used for, if any case is not appropriated.
	
    */
    
    // Mini Example : Basic Banking Application 
    
    int operation;
    int current_balance=750;
    int amount;
    
    printf("1. Withdraw money \n2. Deposit\n3. Transfer \n4. Current balance inquiry \n5. Card return\n\nPlease select the operation: ");
    scanf("%d", &operation);
    
    switch(operation){
             
            case 1: 
             
             printf("Current balance: %d\nEnter the amount you want to withdraw: ", current_balance);
             scanf("%d",&amount);
             if(amount > current_balance){
                  
                  printf("Current balance is not enough.");
                  
                  }
             else {
             current_balance -= amount;
             printf("Successfully completed. New current balance: %d", current_balance);
             }
             break;
             
            case 2:
                 
             printf("Current balance: %d\nEnter the amount you want to deposit: ", current_balance);
             scanf("%d",&amount);
             
             current_balance += amount;
             printf("Successfully completed. New current balance: %d", current_balance);
             break;
             
            case 3:
                 
             printf("Current balance: %d\nEnter the amount you want to transfer:", current_balance);
             scanf("%d",&amount);
             
             if(amount > current_balance){
                  
                  printf("Current balance is not enough.");
                  
                  }
             else {
             current_balance -= amount;
             printf("Successfully completed. New current balance: %d", current_balance);
             }
             break;
            
            case 4:
            
            printf("Your current balance: %d\n", current_balance);
            break;
            
            case 5:
                 
                 printf("Your card has been returned.");
                 break; 
                 
            default:
             
             printf("Undefined operation number!");
             break;
    }
    
    return 0;
    }
