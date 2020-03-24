#include <stdio.h>

int main()
{
	int num,reverse;
	printf("Please enter a number : ");
	scanf("%d", &num);	
	
	reverse = reverse_func(num);
	printf("Reverse of taken number : %d", reverse);
	
	return 0;
}

int remain=0, temp;

reverse_func(int num){
	if(num){
		remain = num%10;
		temp = temp*10+remain;
		reverse_func(num/10);
	}
	return temp;	
}

