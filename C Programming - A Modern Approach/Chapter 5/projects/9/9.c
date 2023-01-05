#include <stdio.h> 
 
int main (void) 
{
   int dd1;
   int mm1;
   int yy1;
   int dd2;
   int mm2;
   int yy2;
   int earliestDate; 
 
   printf("Enter first date: \n");
   scanf("%2d/%2d/%2d", &dd1, &mm1, &yy1);

   printf("Enter second date: \n");
   scanf("%2d/%2d/%2d", &dd2, &mm2, &yy2);

   if (yy1 != yy2){
      if(yy1 < yy2){
         earliestDate = 0;
      } else {
         earliestDate = 1;
      }
   } else if (mm1 != mm2){
      if (mm1 < mm2){
         earliestDate = 0;
      } else {
         earliestDate = 1;
      }
   } else if (dd1 != dd2) {
      if (dd1 < dd2){
         earliestDate = 0;
      } else {
         earliestDate = 1;
      }
   } else {
      earliestDate = -1;
   }

   if(earliestDate != -1){
      printf("The earliest date between %.2d/%.2d/%.2d and %.2d/%.2d/%.2d is: ", dd1, mm1, yy1, dd2, mm2, yy2);
      if (earliestDate == 0){
         printf("%.2d/%.2d/%.2d\n", dd1, mm1, yy1);
      } else {
         printf("%.2d/%.2d/%.2d\n", dd2, mm2, yy2);
      }
   } else {
      printf("%.2d/%.2d/%.2d and %.2d/%.2d/%.2d are equal dates.\n", dd1, mm1, yy1, dd2, mm2, yy2);
   }

   return 0; 
} 
