#include <stdio.h>

int main (void){
    float totalAmount;
    float amountAfter;
    int twenty_Bills;
    int ten_Bills;
    int five_Bills;
    int one_Bills;

    printf("Please enter the amount of money you need to pay in US Dollars: $");
    scanf("%f", &totalAmount);

    amountAfter = totalAmount;
    twenty_Bills = amountAfter / 20;
    amountAfter = amountAfter - twenty_Bills * 20.0f;
    ten_Bills = amountAfter / 10;
    amountAfter = amountAfter - ten_Bills * 10.0f;
    five_Bills = amountAfter / 5;
    amountAfter = amountAfter - five_Bills * 5.0f;
    one_Bills = amountAfter;
    amountAfter = amountAfter - one_Bills * 1.0f;

    printf("The total amount was: $%.2f \n", totalAmount);
    printf("$20 dollar bills: %d \n", twenty_Bills);
    printf("$10 dollar bills: %d \n", ten_Bills);
    printf("$5 dollar bills: %d \n", five_Bills);
    printf("$1 dollar bills: %d \n", one_Bills);
    printf("Cents: %.2f", amountAfter);

    return 0;
}