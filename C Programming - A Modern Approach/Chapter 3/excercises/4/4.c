#include <stdio.h> 
 
int main (void) 
{
    int i;
    int j;
    float x;

    scanf("%d%f%d", &i, &x, &j);
    //What happens if input "10.3 5 6?"
    //It should print "10 0.3 5"
    printf("%d %f %d", i, x, j);
    return 0; 
} 

//It does, because it takes 10 as an int, then breaks at . 
//and takes .3 as a float value, then takes 5 as an int value and stops taking values.