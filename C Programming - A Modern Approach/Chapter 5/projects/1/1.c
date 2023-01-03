#include <stdio.h> 
 
int main (void) 
{
   int number;
   int digits;

   printf("Enter a number to calculate the number of digits it has (4 Digits Max, negative numbers will be converted to positive): \n");
   scanf("%4d", &number);

   //Absolute value in case a negative number is inputted
   if(number >= 0){
      number = number;
   } else {
      number = -number;
   }

   if(number > 999){
      digits = 4;
   } else if (number > 99){
      digits = 3;
   } else if (number > 9){
      digits = 2;
   } else {
      digits = 1;
   }

   printf("The number you have inputted was: %4d and it has %d digits", number, digits);
 
   return 0; 
} 
//note: Due to the nature of scanf if a negative 4 digit number is passed to the program it will bug it: for example -4353 is taken as 435
//because scanf is reading the "-" sign as an extra character, i've found no way to solve this with my current knowledge