#include <stdio.h> 
 
int main (void) 
{ 
   int i;
   i = 17;
   printf("%d\n", i >= 0 ? i : -i); //Should print 17

   i = -17;
   printf("%d\n", i >= 0 ? i : -i); //Should print 17
 
   //It is basically an absolute value function
   return 0; 
} 
