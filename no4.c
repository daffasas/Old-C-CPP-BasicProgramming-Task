#include <stdio.h>
#define RATE 0.65

int main()
{
    float dollar, pound;
    printf("Input dollars: ");
    scanf("%f", &dollar); //input dollar
    pound = dollar * RATE; //konversi 1 dollar = 0.65 gbp
    printf("%.0f USD = %.2f GBP\n1", dollar, pound); //print
}