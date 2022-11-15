#include <stdio.h>

int main()
{
    double VTBI, mins, rate; //deklarasi variable
    printf("Volume to be infused (ml) => ");    
    scanf("%lf", &VTBI); //meminta input cairan infus (dalam ml)
    printf("Minutes over which to infuse => ");
    scanf("%lf", &mins); //meminta input menit untuk infus
    rate = VTBI * (60/mins); //menghitung kecepatan
    printf("VTBI: %lf ml\nRate: %lf ml/hr\n", VTBI, rate); //output VTBI
}