#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)


int main(void)
{
    float fTemp;
    float cTemp;

    printf("Enter the temperature you wish to convert in Farenheit: ");
    scanf("%f", &fTemp);

    cTemp = (fTemp - FREEZING_PT) * SCALE_FACTOR;

    printf("The temperature you provided was %.2fº F\n", fTemp);
    printf("The corresponding temperature in Celsius is %.2fº C\n", cTemp);

    return 0;

}
