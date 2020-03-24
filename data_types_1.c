#include <stdio.h>

int main() {
 
 /*
 
 Data structures:
 
 -int --> to using for integer number (4 byte)(short int and long int also available for different bytes)
 -float --> to using for decimal numbers (4 byte)
 -double --> to using if numbers are bigger than float and float must not use (8 byte)
 -long double --> to using if numbers are bigger than double and long double must not use (12 byte)
 -char --> to using for characters (1 byte)
 
 --bool (boolean) --> return true or false
 

 If we want to call given input, calling is divide into by data structures:

 %d --> for integer numbers
 %f --> for float and double
 %c --> for char
 
 */
 
 
 int a= 10;
 float b= 5.2;
 double c= 34.34345;
 char e= 'k';
 
 printf("integer: %d \nfloat:  %f \ndouble: %f \nchar: %c \n\n",a,b,c,e);
 
 /*
 
 In the float and double data structures, if we want to see X number after dot,
 we can define it like that %.Xf (X can change according to you).
 
 */

  double d = 2.323443;
  printf("%.1f \n\n",d); /* --> In decimal numbers, how many digits want to appear 
  after the period can be specified by changing the number like ".1f , .2f". */
 
 
 //Bytes according to data structures
 printf("byte for int: %d\n",sizeof(int));
 printf("byte for short int: %d\n",sizeof(short int));
 printf("byte for long int: %d\n",sizeof(long int));
 printf("byte for char: %d\n",sizeof(char));
 printf("byte for float: %d\n",sizeof(float));
 printf("byte for double: %d\n",sizeof(double));
 
 
 return 0;   
 }
