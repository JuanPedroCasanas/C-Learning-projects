#include <stdio.h> 
 
int main (void) 
{

   // ++i is the correct one, example below
   int i, j, k1, k2, q1, q2;
   j = 5;

   i = 1; //I redefine i a bunch of times so the other calculations are not affected by the multiple increment operators
   k1 = i++ + j; //Should be 6 

   i = 1; 
   q1 = i += 1 + j; // Should be 7

   //------------------------//

   i = 1;
   k2 = ++i + j; // Should be 7

   i = 1;
   q2 = i += 1 + j; //Should be 7

   printf("%d\n%d\n%d\n%d\n", k1, q1, k2, q2); 

 
   //We can see that k1 <> q1 so i++ <> i += 1
   //On the other hand k2 == q2 so ++i == i += 1 
   return 0; 
} 
