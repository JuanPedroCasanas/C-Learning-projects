#include <stdio.h> 
 
int main (void) 
{
   int gs1;
   int groupIdentifier;
   int publisherCode;
   int itemNumber;
   int checkDigit;

   printf("Please enter the ISBN in the format xxx-x-xxx-xxxxx-x \n");
   scanf("%d-%d-%d-%d-%d", &gs1, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

   printf("The ISBN inputted was: %d-%d-%d-%d-%d \n", gs1, groupIdentifier, publisherCode, itemNumber, checkDigit);
   printf("GS1 Prefix: %d \n", gs1);
   printf("Group identifier: %d \n", groupIdentifier);
   printf("Publisher code: %d \n", publisherCode);
   printf("Item number: %d \n", itemNumber);
   printf("Check digit: %d \n", checkDigit);
 
   return 0; 
} 
