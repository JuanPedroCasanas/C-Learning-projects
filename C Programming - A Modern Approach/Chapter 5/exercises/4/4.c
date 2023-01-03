#include <stdio.h> 
 
int main (void) 
{
   int i, j, k;
   i = 1;
   j = 2;
   printf("%d\n", (i >= j ? (i > j ? 1 : 0) : -1));

   i = 2;
   j = 1;
   printf("%d\n", (i >= j ? (i > j ? 1 : 0) : -1));

   i = 1;
   j = 1;
   printf("%d\n", (i >= j ? (i > j ? 1 : 0) : -1));
   
   return 0; 
} 
