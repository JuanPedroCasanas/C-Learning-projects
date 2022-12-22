#include <stdio.h> 
 
int main (void) 
{
   int i, j;
   i = 8;
   j = 5;

   // in C99
   printf("%2d\n", i / j); // 1
   printf("%2d\n", (-i) / j); // -1
   printf("%2d\n", i / (-j)); // -1
   printf("%2d\n", (-i) / (-j)); // 1
 
   return 0; 
} 
