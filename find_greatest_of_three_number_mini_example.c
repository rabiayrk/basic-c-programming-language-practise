#include <stdio.h>

int main()
{
	int first, second, third;
	
	printf("Please enter three number : \n");
	scanf("%d \n %d \n%d", &first, &second, &third);
	
	int greatest = 0;
	
	if(first > second && first > third){
		greatest = first;
		printf("First (%d) is greatest.", first);
	}
	else if (second > first && second > third){
		greatest = second;
		printf("Second (%d) is greatest.", greatest);
	}
	else if(third > first && third > second){
		greatest = third;
		printf("Third (%d) is greatest.", greatest);
	}
	else { // if any number is equal
	
			if (first == second && first == third && second == third){
				printf("All of them equal.");
			}
			else if(second == first){
				if(second > third){
					greatest = second;
					printf("First and second (%d) are equal and greatest.", greatest);
				}
			}	
			else if(third == first){
				if(third > second){
					greatest = third;
					printf("First and third (%d) are equal and greatest.", greatest);
				}	
			}				
			else if(third == second)
			{
				if(third > first){
					greatest = third;
					printf("Second and third (%d) are equal and greatest.", greatest);
				}	
			}
	}
}
