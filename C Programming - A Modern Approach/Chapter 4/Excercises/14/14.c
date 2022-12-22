#include <stdio.h> 
 
int main (void) 
{
   int a, b, c, d, e;

   a = 1;
   b = 2;
   c = 3;
   d = 4;
   e = 5;

   printf(" A \n");
   printf("%2d\n", a * b - c * d + e);
   printf("%2d\n\n", (((a * b) - (c * d)) + e));

   printf(" B \n");
   printf("%2d\n", a / b % c / d);
   printf("%2d\n\n", (((a / b) % c) / d));

   printf(" C \n");
   printf("%2d\n", - a - b + c - + d);
   printf("%2d\n\n", ((((- a) - b) + c) - (+ d)));
 
   printf(" D \n");
   printf("%2d\n", a * - b / c - d);
   printf("%2d\n\n", (((a * (- b)) / c) - d));

   return 0; 
} 
