#include <stdio.h>

//This one is not exactly like the one in the book because i solved it before looking at the solution

int main(void)
{
    int firstD, secondD, thirdD, fourthD, fifthD, sixthD, seventhD, eighthD, ninethD, tenthD, eleventhD, twelfthD;

    printf("Please enter the first eleven numbers of the UPD to calculate the twelfth digit: \n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &firstD, &secondD, &thirdD, &fourthD, 
        &fifthD, &sixthD, &seventhD, &eighthD, &ninethD, &tenthD, &eleventhD);
    twelfthD = 9 - (((((firstD + thirdD + fifthD + seventhD + ninethD + eleventhD) * 3) + (secondD + fourthD + sixthD + eighthD + tenthD)) - 1) % 10);

    printf("The incomplete UPD inputted was: %d %d%d%d%d%d %d%d%d%d%d X \n", firstD, secondD, thirdD, fourthD, fifthD, sixthD, seventhD, eighthD, ninethD, tenthD, eleventhD);
    printf("The complete UPD Number is: %d %d%d%d%d%d %d%d%d%d%d %d \n", firstD, secondD, thirdD, fourthD, fifthD, sixthD, seventhD, eighthD, ninethD, tenthD, eleventhD, twelfthD);
    printf("The twelfth digit is: %d \n", twelfthD);

    return 0;
}