#include <stdio.h>

int main(void)
{
    int i = 40;
    float x = 839.21f;

    printf("First print\n");
    printf("l%dl l%5dl l%-5dl l%5.3dl \n", i, i, i, i);

    printf("Second print\n");
    printf("l%10.3fl l%10.3el l%-10gl \n", x, x, x);

    return 0;
}