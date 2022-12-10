#include <stdio.h>
#define PI 3.14159265358979323846
#define VOLUMECONSTANT 4.00f/3.00f


int main()
{
    float radius;

    printf("Enter the radius of the sphere that you wish to calculate the volume of in meters: ");
    scanf("%f", &radius);
    printf("The volume of a %.2f meter radius sphere is: %.2f cubic meters", radius,(VOLUMECONSTANT * PI * radius * radius * radius));
    return 0;
}