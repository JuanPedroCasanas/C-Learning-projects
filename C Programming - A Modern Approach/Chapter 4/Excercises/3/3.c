#include <stdio.h> 
 
int main (void) 
{
   int i, j;
   i = 8;
   j = 5;

   //In C89
   printf("%2d\n", i / j); // 1
   printf("%2d\n", (-i) / j); // -1 or -2
   printf("%2d\n", i / (-j)); // -1 or -2
   printf("%2d\n", (-i) / (-j)); // 1 or 2
 
   return 0; 
} 
