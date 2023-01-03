#include <stdio.h> 
 
int main (void) 
{
   int hours;
   int minutes;
   int ampm; //I'll use 0 for am and 1 for pm

   printf("Enter a 24-hour time to convert it to a 12-hour time (e.g: 21:11): \n");
   scanf("%2d:%2d", &hours, &minutes);

   if ((hours > 12) || (hours == 12 && minutes > 0)){
      ampm = 1;
   } else {
      ampm = 0;
   }

   printf("The 24-hour time is: %.2d:%.2d\n", hours, minutes);

   switch(hours){
      case 13: hours = 1; break;
      case 14: hours = 2; break;
      case 15: hours = 3; break;
      case 16: hours = 4; break;
      case 17: hours = 5; break;
      case 18: hours = 6; break;
      case 19: hours = 7; break;
      case 20: hours = 8; break;
      case 21: hours = 9; break;
      case 22: hours = 10; break;
      case 23: hours = 11; break;
      case 24: hours = 12; break;
   }

   if (ampm == 1) {
      printf("The 12-hour time is: %.2d:%.2d PM\n", hours, minutes);
   } else {
      printf("The 12-hour time is: %.2d:%.2d AM\n", hours, minutes);
   }
 
   return 0; 
} 
