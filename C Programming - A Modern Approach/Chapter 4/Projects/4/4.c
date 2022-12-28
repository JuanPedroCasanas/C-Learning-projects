#include <stdio.h> 
 
int main (void) 
{
   int originalNum;
   int octalNum;
   int result;
   int r1, r2, r3, r4, r5;

   printf("Enter a number between 0 and 32767 to convert it to octal: \n");
   scanf("%d", &originalNum);

   r1 = originalNum % 8;
   result = originalNum / 8;

   r2 = result % 8;
   result /= 8;

   r3 = result % 8;
   result /= 8;

   r4 = result % 8;
   result /= 8;

   r5 = result % 8;
   result /= 8;

   printf("The original number was %d \n The converted number is %d%d%d%d%d", originalNum, r5, r4, r3, r2, r1);
 
   return 0; 
} 
