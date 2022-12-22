#include <stdio.h> 
 
int main (void) 
{
   int i, j;

   i = 1;
   j = 2;
   printf("A \n");
   i += j; // i = 3 and j = 2
   printf("%d %d\n\n", i, j);

   i = 1;
   j = 2;
   printf("B \n");
   i--; // i = 0
   printf("%d\n\n", i);

   i = 1;
   j = 2;
   printf("C \n");
   i * j / i; // i = 1 and j = 2 (There's no assignment operator so the result is computed and then discarted)
   printf("%d %d\n\n", i, j);

   i = 1;
   j = 2;
   printf("D \n");
   i % j++; // i = 1 and j = 3
   printf("%d %d\n\n", i, j);
   return 0; 
} 
