/* The purpose of this program is to calculate simple interest based on Principal Value and Rate with respect to time.*/

#include <stdio.h>

int main()
{
    float t, r, P;

    printf("\n\nCalculating simple interest. \n");

    printf("\nEnter Time in Years : \n");
    scanf("%f", &t);
    printf("Enter Rate of Interest in Percentage Value : \n");
    scanf("%f", &r);
    printf("Enter Principal Value : \n");
    scanf("%f", &P);

    printf("\nTherefore Simple Interest after specified years will be: %f \n", P * r * t / 100);

    return 0;
}