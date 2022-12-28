#include <stdio.h> 
 
int main (void) 
{
   int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13;

   printf("Enter the first 12 digits of the EAN: \n");
   scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n9, &n9, &n10, &n11, &n12);
 
   n13 = (9 - (((((n2 + n4 + n6 + n8 + n10 + n12) * 3) + (n1 + n3 + n5 + n7 + n9 + n11)) - 1) % 10));

   printf("The complete EAN is: %d%d%d%d%d%d%d%d%d%d%d%d-%d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13);
   return 0; 
} 
