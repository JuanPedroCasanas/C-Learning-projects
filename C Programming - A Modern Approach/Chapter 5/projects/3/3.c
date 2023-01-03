#include <stdio.h>

int main (void){

   int shareAmmount;
   float shareValue;
   float tranSize;
   float commissionRate;
   float rivalCommission;

   printf("Enter the ammount of shares sold: \n");
   scanf("%d", &shareAmmount);

   printf("Enter the value of the shares sold: \n");
   scanf("%f", &shareValue);

   if (shareAmmount < 2000){
      rivalCommission = shareAmmount * 0.03 + 33;
   } else {
      rivalCommission = shareAmmount * 0.02 + 33;
   }

   tranSize = shareAmmount * shareValue;

   if (tranSize >= 39) {
      if (tranSize >= 500000) {
            commissionRate = 255.0 + 0.0009 * tranSize;
      } else if (tranSize >= 50000) {
            commissionRate = 155.0 + 0.0011 * tranSize;
      } else if (tranSize >= 20000) {
            commissionRate = 100.0 + 0.0022 * tranSize;
      } else if (tranSize >= 6250) {
            commissionRate = 76.0 + 0.0034 * tranSize;
      } else if (tranSize >= 2500) {
            commissionRate = 56.0 + 0.0066 * tranSize;
      } else if (tranSize < 2500) {
            commissionRate = 30 + 0.017 * tranSize;
      }
      printf("The transaction size was: %.2f$\nThe commission rate was: %.2f$\n", tranSize, commissionRate);
      printf("The rival commission rate was: %.2f$\n", rivalCommission);
   } else {
      printf("The minimun transaction size is 39.00$, no calculations were computed.");
   }

   return 0;
}