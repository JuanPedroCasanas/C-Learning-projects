#include <stdio.h> 
 
int main (void) 
{
   int itemNumber;
   float unitPrice;
   int yyyy;
   int mm;
   int dd;
   
   printf("Please enter the item number: \n");
   scanf("%d", &itemNumber);
   
   printf("Please enter the unit price: \n");
   scanf("%f", &unitPrice);

   printf("Please enter the date of the purchase in the format mm/dd/yyyy: \n");
   scanf("%d/%d/%d", &mm, &dd, &yyyy);

   printf("Item\tUnit\t\tPurchase\n");
   printf("\tPrice\t\tDate\n");
   printf("%-6d\t$ %6.2f\t%d/%d/%d",itemNumber, unitPrice, mm, dd, yyyy); //Not quite sure how to left justify the date, given the fact that it is three different variables and not a single string

   return 0; 
} 
