#include <stdio.h> 
 
int main (void) 
{ 
   int n;
   n = 5;

   if (n == 1 - 10){
      printf("n is between 1 and 10");
   }
   /*This is a legal statement as it won't crash the program but it still won't do what it is intended to do
   the eval is going to check whether n == (1 - 10) so unless n == -9 this condition won't ever be true
   with n = 5 nothing happens as the condition described above is not met
   */
   return 0; 
} 
