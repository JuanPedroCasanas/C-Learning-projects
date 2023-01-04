#include <stdio.h> 
 
int main (void) 
{
   int hours;
   int minutes;
   int ampm;
   
   int closestDHour;
   int closestDMinute;
   int closestAHour;
   int closestAMinute;

   printf("Enter a time in 24-Hour format: \n");
   scanf("%2d:%2d", &hours, &minutes);

   if ((hours > 12) || (hours == 12 && minutes > 0)){
      ampm = 1;
   } else {
      ampm = 0;
   }

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

   if (ampm == 0){
      if (hours < 9) {
         closestDHour = 8;
         closestDMinute = 00;
         closestAHour = 10;
         closestAMinute = 
      }
   }
 
   return 0; 
} 
