#include <stdio.h>
#define INDTERM 6.0f

int main (void)
{
    float x;
    printf("((((3X + 2)X - 5)X - 1)X + 7)X - 6\n");
    printf("Enter the value of 'X' ");
    scanf("%f", &x);
    float x_5 = x*x*x*x*x;
    float x_4 = x*x*x*x;
    float x_3 = x*x*x;
    float x_2 = x*x;


    printf("The result from the equation is %.2f", (((((3.0f * x + 2.0f) * x - 5.0f) * x - 1.0f) * x + 7.0f) * x - INDTERM));
    return 0;

}