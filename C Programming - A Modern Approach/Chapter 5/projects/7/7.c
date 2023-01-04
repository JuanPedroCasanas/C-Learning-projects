#include <stdio.h> 
 
int main (void) 
{ 
   int firstInt, secondInt, thirdInt, fourthInt;
   int max1, max2, min1, min2, absMax, absMin;

   printf("Enter 4 integers separated by a space to find the largest and smallest one:\n");
   scanf("%d %d %d %d", &firstInt, &secondInt, &thirdInt, &fourthInt);

   printf("Numbers inputted: %d %d %d %d\n", firstInt, secondInt, thirdInt, fourthInt);

   max1 = firstInt;
   min1 = secondInt;
   max2 = thirdInt;
   min2 = fourthInt;

   if (firstInt < secondInt) {
      min1 = firstInt;
      max1 = secondInt;
   }

   absMax = max1;
   absMin = min1;

   if (thirdInt < fourthInt){
      max2 = fourthInt;
      min2 = thirdInt;
   }

   if (max1 < max2){
      absMax = max2;
   }

   if (min2 < min1){
      absMin = min2;
   }

   printf("Largest Int: %d\n", absMax);
   printf("Smallest Int: %d\n", absMin);

 
   return 0; 
} 
