#include <stdio.h> 
 
int main (void) 
{
   float windSpeed;

   printf("Please enter the windspeed in knots: \n");
   scanf("%f", &windSpeed);

   if (windSpeed >= 0){
      windSpeed = windSpeed;
   } else {
      windSpeed = -windSpeed;
   }

   printf("Speed (Knots)\tDescription\n");

   if(windSpeed > 63) {
      printf("%.2f\t\tHurricane", windSpeed);
   } else if (windSpeed >= 48){
      printf("%.2f\t\tStorm", windSpeed);
   } else if (windSpeed >= 28){
      printf("%.2f\t\tGale", windSpeed);
   } else if (windSpeed >= 4){
      printf("%.2f\t\tBreeze", windSpeed);
   } else if (windSpeed >= 1){
      printf("%.2f\t\tLight Air", windSpeed);
   } else {
      printf("%.2f\t\tCalm", windSpeed);
   }
 
   return 0; 
} 
