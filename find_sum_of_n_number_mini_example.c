#include <stdio.h>

int main(){
	
	int n;
	printf("Please enter number n : ");
	scanf("%d", &n);
	
	int i, sum=0;
	for(i=0; i<=n; i++){
		sum += i;
	}
	printf("Sum of first n number is %d", sum);
	
	return 0;	
	
}
