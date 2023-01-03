#include <stdio.h> 
 
int main (void) 
{
   int n;

   n = 0;

   /*/
   The statement is legal as in, it won't crash the program, but it doesn't do what it is intended to do
   it evaluates whether n is greater than or equal 1, if it is then it evaluates whether 1 (TRUE in C) is less than or equal to 10
   which will always return 1, meaning that any number out of range will fit the criteria, because if n >= 1 then 1 <= 10
   and if n isn't >= 1 then 0(FALSE in C) <= 10
   /*/

   if (n >= 1 <= 10){
      printf("n is between 1 and 10\n");
   } 
   //n equal to 0 fits the criteria for the if eval, so it prints the message (Even if the idea is that it shouldn't)
 
   return 0; 
} 
