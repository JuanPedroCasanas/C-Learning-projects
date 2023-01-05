#include <stdio.h> 
 
int main (void) 
{
   int hours;
   int minutes;
   int dTime1;
   int dTime2;
   int aTime1;
   int aTime2;
   int dif1;
   int dif2;
   int totalTime;
   int dHours;
   int dMinutes;
   int aHours;
   int aMinutes;

   printf("Enter a time in 24-Hour format: \n");
   scanf("%2d:%2d", &hours, &minutes);

   totalTime = (hours * 60) + minutes;

   dTime1 = (8 * 60);
   aTime1 = (10 * 60) + 16;

   dTime2 = (9 * 60) + 43;
   aTime2 = 11 * 60 + 52;

   dif1 = dTime1 - totalTime;
   dif2 = dTime2 - totalTime;

   if ((dif1 > dif2 && dif2 >= 0) || dif1 < 0){
      dTime1 = dTime2;
      aTime1 = aTime2;
   }

   dTime2 = (11 * 60) + 19;
   aTime2 = (13 * 60) + 31;

   dif1 = dTime1 - totalTime;
   dif2 = dTime2 - totalTime;

   if ((dif1 > dif2 && dif2 >= 0) || dif1 < 0){
      dTime1 = dTime2;
      aTime1 = aTime2;
   }

   dTime2 = (12 * 60) + 47;
   aTime2 = (15 * 60);

   dif1 = dTime1 - totalTime;
   dif2 = dTime2 - totalTime;

   if ((dif1 > dif2 && dif2 >= 0) || dif1 < 0){
      dTime1 = dTime2;
      aTime1 = aTime2;
   }

   dTime2 = (14 * 60);
   aTime2 = (16 * 60) + 8;

   dif1 = dTime1 - totalTime;
   dif2 = dTime2 - totalTime;

   if ((dif1 > dif2 && dif2 >= 0) || dif1 < 0){
      dTime1 = dTime2;
      aTime1 = aTime2;
   }

   dTime2 = (15 * 60) + 45;
   aTime2 = (17 * 60) + 55;

   dif1 = dTime1 - totalTime;
   dif2 = dTime2 - totalTime;

   if ((dif1 > dif2 && dif2 >= 0) || dif1 < 0){
      dTime1 = dTime2;
      aTime1 = aTime2;
   }

   dTime2 = (19 * 60);
   aTime2 = (21 * 60) + 20;

   dif1 = dTime1 - totalTime;
   dif2 = dTime2 - totalTime;

   if ((dif1 > dif2 && dif2 >= 0) || dif1 < 0){
      dTime1 = dTime2;
      aTime1 = aTime2;
   }
 
   dTime2 = (21 * 60) + 45;
   aTime2 = (23 * 60) + 58;

   dif1 = dTime1 - totalTime;
   dif2 = dTime2 - totalTime;

   if ((dif1 > dif2 && dif2 >= 0) || dif1 < 0){
      dTime1 = dTime2;
      aTime1 = aTime2;
   }

   dHours = dTime1 / 60;
   dMinutes = dTime1 % 60;
   aHours = aTime1 / 60;
   aMinutes = aTime1 % 60;

   if (dHours >= 12){
      printf("The closest departure time is: %.2d:%.2d PM\n", dHours - 12, dMinutes);
   } else {
      printf("The closest departure time is: %.2d:%.2d AM\n", dHours, dMinutes);
   }

   if (aHours >= 12){
      printf("The closest departure time is: %.2d:%.2d PM\n", aHours - 12, aMinutes);
   } else {
      printf("The closest departure time is: %.2d:%.2d AM\n", aHours, aMinutes);
   }

   return 0; 
} 
