#include <stdio.h>

int main (void){
    float loan;
    float interestRate;
    float monthlyPayment;
    float balance;

    printf("Enter the total amount of the loan: $");
    scanf("%f", &loan);

    printf("Enter the interest rate of the loan: ");
    scanf("%f", &interestRate);

    printf("Enter the monthly payment of the loan: $");
    scanf("%f", &monthlyPayment);

    balance = loan;

    printf("\n**************************\n");
    balance = balance + (((interestRate/12) * balance) / 100.0f) - monthlyPayment;
    printf("\nBalance remaining after the first payment: $%.2f \n", balance);

    balance = balance + (((interestRate/12) * balance) / 100.0f) - monthlyPayment;
    printf("Balance remaining after the second payment: $%.2f \n", balance);

    balance = balance + (((interestRate/12) * balance) / 100.0f) - monthlyPayment;
    printf("Balance remaining after the third payment: $%.2f \n", balance);

    printf("\n**************************");

    return 0;
}