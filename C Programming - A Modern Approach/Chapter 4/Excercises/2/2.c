#include <stdio.h> 
 
int main (void) 
{
   // In C99 the result will always be -1, in C89 the result may vary between -1 and -2

   int i, j;
   i = 4;
   j = 2;
   printf("%d\n%d \n%d", ((-i)/j), (i/(-j)), -(i/j));
 
   return 0; 
} 
