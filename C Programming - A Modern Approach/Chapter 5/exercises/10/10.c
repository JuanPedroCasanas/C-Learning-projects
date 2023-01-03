#include <stdio.h> 
 
int main (void) 
{ 
   int i;
   i = 1;
   switch (i % 3){
      case 0: printf("Zero");
      case 1: printf("One");
      case 2: printf("Two");
   }

   //Should print OneTwo because there is no break statement so it falls to case 1 and then falls through case 2
 
   return 0; 
} 
