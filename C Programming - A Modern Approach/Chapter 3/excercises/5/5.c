#include <stdio.h> 
 
int main (void) 
{
    int i;
    float y;
    float x;

    scanf("%f%d%f", &x, &i, &y);
    //What happens if input "12.3 45.6 789?"
    //It should print "12.3, 45, 0.6"
    printf("%f %d %f", x, i, y);
    return 0; 
} 

/*
It does, because it takes 12.3 as a float value
takes 45 as an int value but stops at . because it can't be a part of an integers
takes .6 as a float value and stops taking values
*/
