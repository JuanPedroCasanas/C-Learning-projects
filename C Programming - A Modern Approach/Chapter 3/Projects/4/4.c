#include <stdio.h> 
 
int main (void) 
{
   int areaCode;
   int firstThreeDigits;
   int lastFourDigits;

   printf("Please enter a phone number in the following format (xxx) xxx-xxxx\n");
   scanf("(%d) %d-%d", &areaCode, &firstThreeDigits, &lastFourDigits);
   printf("The phone number you've entered is: \n (%d) %d-%d \n", areaCode, firstThreeDigits, lastFourDigits);
   printf("The converted phone number is: \n %d.%d.%d", areaCode, firstThreeDigits, lastFourDigits);
   
   return 0; 
} 
