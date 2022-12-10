#include <stdio.h>
#define INCHES_PER_POUND 166
#define ROUND_UP 1

int main (void)
{
    int height;
    int length;
    int width;
    printf("Enter the height of the box: ");
    scanf("%d", &height);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);
    int volume = (height * width * length);
    printf("Dimensions: %dx%dx%d Inches \n", height, length, width);
    printf("volume: %d Cubic inches\n", volume);
    printf("Weight: %d Pounds\n", ((volume / INCHES_PER_POUND) + ROUND_UP));
    return 0;
}   