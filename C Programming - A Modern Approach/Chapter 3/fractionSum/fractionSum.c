#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int den1;
    int den2;
    int resultNum;
    int resultDen;

    printf("Please enter the first fraction in the format x/y, e.g: 1/4. :\n");
    scanf("%d/%d", &num1, &den1);
    printf("Please enter the second fraction in the format x/y, e.g: 1/4. :\n");
    scanf("%d/%d", &num2, &den2);

    resultNum = (num1 * den2) + (num2 * den1);
    resultDen = den1 * den2;

    printf("The result of %d/%d + %d/%d is:\n\t %d/%d", num1, den1, num2, den2, resultNum, resultDen);
    return 0;
}