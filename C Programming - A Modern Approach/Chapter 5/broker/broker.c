#include <stdio.h>

int main (void){
    float tranSize;
    float commissionRate;

    printf("Enter value of trade: \n");
    scanf("%f", &tranSize);

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
        printf("The transaction size was: %.2f$\n The commission rate was: %.2f$\n", tranSize, commissionRate);
    } else {
        printf("The minimun transaction size is 39.00$, no calculations were computed.");
    }

    return 0;
}