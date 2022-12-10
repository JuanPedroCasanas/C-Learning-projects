#include <stdio.h>
#define INDTERM 6.0f

int main (void)
{
    float x;
    printf("3X^5 + 2X^4 - 5X^3 - X^2 + 7X - 6\n");
    printf("Enter the value of 'X' ");
    scanf("%f", &x);
    float x_5 = x*x*x*x*x;
    float x_4 = x*x*x*x;
    float x_3 = x*x*x;
    float x_2 = x*x;


    printf("The result from the equation is %f", (3.0f * x_5 + 2.0f * x_4 - 5.0f * x_3 - x_2 + 7.0f * x - INDTERM));
    return 0;

}