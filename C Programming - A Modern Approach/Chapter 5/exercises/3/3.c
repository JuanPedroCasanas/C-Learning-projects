#include <stdio.h> 
 
int main (void) 
{
   int i, j, k;

   i = 3;
   j = 4;
   k = 5;
   printf("%d\n", i < j || ++j < k);
   //Should print 1
   printf("%d %d %d \n", i, j, k);
   //should print 3, 4, 5 as the ++j expression is not evaluated in the previous print, because i < j already is 1

   i = 7;
   j = 8;
   k = 9;
   printf("%d\n", i - 7 && j++ < k);
   //Should print 0
   printf("%d %d %d \n", i, j, k);    
   //Should print 7, 8, 9, same reason as the previous print, i - 7 is 0 so the right expression is not evaluated

   i = 7;
   j = 8;
   k = 9;
   printf("%d\n", (i = j) || (j = k));
   //Should print 1
   printf("%d %d %d \n", i, j, k); 
   //Should print 8 8 9 (Right expression is not evaluated)

   i = 1;
   j = 1;
   k = 1;
   printf("%d\n", ++i || ++j && ++k);
   //Should print 1
   printf("%d %d %d\n", i, j, k);
   //Should print 2, 1, 1

   return 0; 
} 
