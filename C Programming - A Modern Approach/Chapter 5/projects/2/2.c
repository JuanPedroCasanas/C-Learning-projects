#include <stdio.h> 
 
int main (void) 
{
   int hours;
   int minutes;
   int ampm; //I'll use 0 for am and 1 for pm

   printf("Enter a 24-hour time to convert it to a 12-hour time (e.g: 21:11): \n");
   scanf("%2d:%2d", &hours, &minutes);

   if (((hours > 12) || (hours == 12 && minutes > 0)) && hours != 24){
      ampm = 1;
   } else {
      ampm = 0;
   }

   printf("The 24-hour time is: %.2d:%.2d\n", hours, minutes);

   if (ampm == 1) {
      hours = hours - 12;
      printf("The 12-hour time is: %.2d:%.2d PM\n", hours, minutes);
   } else {
      if (hours == 24){
         hours = 0;
      }
      printf("The 12-hour time is: %.2d:%.2d AM\n", hours, minutes);
   }
 
   return 0; 
} 
