#include <stdio.h> 
 
int main (void) 
{
   int firstDigit;
   int secondDigit;
   int thirdDigit;

   printf("Enter a 3 digit integer to reverse: \n");
   scanf("%1d%1d%1d", &firstDigit, &secondDigit, &thirdDigit);

   printf("The original number was: %d%d%d \n The reversed number is: %d%d%d", firstDigit, secondDigit, thirdDigit, thirdDigit, secondDigit, firstDigit);

   return 0; 
} 
