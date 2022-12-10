#include <stdio.h>

int main (void)
{
    float priceBeforeTaxes;

    printf("Enter the value of the price before taxes in $");

    scanf("%f", &priceBeforeTaxes);

    printf("The price before taxes was: $%.2f \n", priceBeforeTaxes);
    printf("The price after taxes is: $%.2f \n", (priceBeforeTaxes + (priceBeforeTaxes / 100.0f) * 5.0f));

    return 0;
}