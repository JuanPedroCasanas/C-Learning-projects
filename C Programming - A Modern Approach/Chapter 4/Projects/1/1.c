#include <stdio.h> 
 
int main (void) 
{
   int origNum;
   int reversedNum;
   int firstDigit;
   int secondDigit;

   printf("Enter a 2 digit integer to reverse: \n");
   scanf("%d", &origNum);

   firstDigit = origNum / 10;
   secondDigit = origNum % 10;

   printf("The original number was: %d \n The reversed number is: %d%d", origNum, secondDigit, firstDigit);

   return 0; 
} 
