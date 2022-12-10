#include <stdio.h>
#define RADIUS 10
#define PI 3.14159265358979323846
#define VOLUMECONSTANT 4.00f/3.00f


int main()
{
    float volume = VOLUMECONSTANT * PI * RADIUS * RADIUS * RADIUS;
    printf("The volume of a 10 meter radius sphere is: %.2f cubic meters", volume);
    return 0;
}