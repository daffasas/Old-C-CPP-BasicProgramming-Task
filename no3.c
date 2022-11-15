#include <stdio.h>

int main()
{
    double hrs, mins, time, temp;
    printf("Input hours and minutes (format hrs mins): ");
    scanf("%lf %lf", &hrs, &mins); //minta input hours minutes
    time = hrs + mins/60;  //konversi hours dan minutes ke hours
    temp = ((4*time*time)/(time + 2)) - 20; //input ke dalam rumus
    printf("The temperature now is %f.\n", temp); //print ke console
}