#include <stdio.h> 
 
int main (void) 
{
   int i, j;

   i = 8;
   j = 5;

   //In C99
   printf("%d\n", i % j); //3
   printf("%d\n", (-i) % j); //-3
   printf("%d\n", i % (-j)); //3
   printf("%d\n", (-i) % (-j)); // -3
 
   return 0; 
} 
