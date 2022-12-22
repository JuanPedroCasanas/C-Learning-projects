#include <stdio.h> 
 
int main (void) 
{
   int i, j;

   i = 8;
   j = 5;

   //In C89
   printf("%d\n", i % j); //3
   printf("%d\n", (-i) % j); //-3 or 2
   printf("%d\n", i % (-j)); // 3 or -2
   printf("%d\n", (-i) % (-j)); // 3 or 2
 
   return 0; 
} 
