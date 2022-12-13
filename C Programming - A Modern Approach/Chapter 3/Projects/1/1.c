#include <stdio.h> 
 
int main (void) 
{
   int dd;
   int mm;
   int yyyy;

   printf("Enter a dater in the format mm/dd/yyyy: ");
   scanf("%d/%d/%d", &mm, &dd, &yyyy);

   printf("Original date: %.2d/%.2d/%.4d \n", dd, mm, yyyy); //I specify the .2 when displaying the int values so for example 02/11/22 is not displayed as 2/11/22
   printf("Reformatted date: %.4d%.2d%.2d", yyyy, mm, dd);
 
   return 0; 
} 
