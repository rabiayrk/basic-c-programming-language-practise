#include <stdio.h>

int main() {
    
    //Take the number from user and then store them in the multidimension array.
    
    /*
    
    Matrix - 3x3 :
    
    1 2 3
    4 5 6
    7 8 9
    
    */
        
    int matrix [3][3];
    //int matris[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int i,j;

    for (i=0; i<3; i++) {        
        for(j=0; j<3; j++){
              
              printf("Please enter the number: \n");
              scanf("%d",&matrix[i][j]);
              
              }
        }
    
    printf("\n\nMATRIX :\n");
    
    for (i=0; i<3;i++) {     
        for(j=0; j<3; j++){
              
              printf("%d ",matrix[i][j]);
              
              }
  	printf("\n");
    }
    
	return 0;
 }
