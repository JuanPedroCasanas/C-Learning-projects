#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int den1;
    int den2;
    int resultNum;
    int resultDen;

    printf("Please enter the fraction sum in the format x/y+z/w. e.g: 1/4+1/2:\n");
    scanf("%d/%d+%d/%d", &num1, &den1, &num2, &den2);

    resultNum = (num1 * den2) + (num2 * den1);
    resultDen = den1 * den2;

    printf("The result of %d/%d + %d/%d is:\n\t %d/%d", num1, den1, num2, den2, resultNum, resultDen);
    return 0;
}