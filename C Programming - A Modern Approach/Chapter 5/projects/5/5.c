#include <stdio.h> 
 
int main (void) 
{ 
   float income;
   float amountOver;
   float tax;
   float total;
   
   printf("Enter an ammount of taxable income: \n");
   scanf("%f", &income);

   if (income > 7000){
      amountOver = income - 7000;
      tax = 230.0f + 0.06 * amountOver;
   } else if (income > 5250){
      amountOver = income - 5250;
      tax = 142.50f + 0.05 * amountOver;
   } else if (income > 3750){
      amountOver = income - 3750;
      tax = 82.50f + 0.04 * amountOver;
   } else if (income > 2250){
      amountOver = income - 2250;
      tax = 37.50f + 0.03 * amountOver;
   } else if (income > 750){
      amountOver = income - 750;
      tax = 7.50f + 0.02 * amountOver;
   } else {
      tax = 0.01 * income;
   }

   total = income - tax;

   printf("Income\tTax\tTotal\n");
   printf("%.2f\t%.2f\t%.2f", income, tax, total);
 
   return 0; 
} 
