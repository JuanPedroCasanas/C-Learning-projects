#include <stdio.h> 
 
int main (void) 
{
   int origNum;
   int reversedNum;
   int firstDigit;
   int secondDigit;
   int thirdDigit;
   int secondHalf;

   printf("Enter a 3 digit integer to reverse: \n");
   scanf("%d", &origNum);

   firstDigit = origNum / 100;
   secondHalf = origNum % 100;

   secondDigit = secondHalf / 10;
   thirdDigit = secondHalf % 10;

   printf("The original number was: %d \n The reversed number is: %d%d%d", origNum, thirdDigit, secondDigit, firstDigit);

   return 0; 
} 
