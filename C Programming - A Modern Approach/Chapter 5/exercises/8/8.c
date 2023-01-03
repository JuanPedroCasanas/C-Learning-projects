#include <stdio.h> 
#include <stdbool.h>
 
int main (void) 
{
   int age;
   bool teenager;

   if (age >= 13)
      if (age <= 19)
         teenager = true;
      else
         teenager = false;
   else if (age < 13)
      teenager = false;


   //Rewritten:

   if (age >= 13 && age <= 19){
      teenager = true;
   } else {
      teenager = false;
   }

   //Another possible way
   teenager = (age >= 13 && age <= 19) ? true : false;

 
   return 0; 
} 
