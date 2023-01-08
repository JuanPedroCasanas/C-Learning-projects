#include <stdio.h> 
 
int main (void) 
{
   int grade;
   int firstDigit;
   int secondDigit;

   printf("Enter a numerical grade to convert it to a letter grade: \n");
   scanf("%d", &grade);

   if (grade > 100 || grade < 0){

      printf("The grade is either greater than 100 or less than 0, try again\n");

   } else {
      
      firstDigit = grade / 10;
      secondDigit = grade % 10;

      printf("Numerical Grade: %3d\n", grade);
      printf("Letter Grade: ");

      switch (firstDigit){
         case 9: case 10: printf("A\n"); break;
         case 8: printf("B\n"); break;
         case 7: printf("C\n"); break;
         case 6: printf("D\n"); break;
         default: printf("F\n"); break;
      }
   }
   return 0; 
} 
