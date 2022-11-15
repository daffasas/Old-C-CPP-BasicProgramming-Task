#include <stdio.h>
#define RATE 1.50 //fixed price for $/mile

int main() 
{
    double awal, akhir, jarak, tarif;
    printf("Taxi Fare Calculator!\n");
    printf("Enter the beginning odometer reading ==>"); //user memasukkan jarak awal
    scanf("%lf", &awal);
    printf("Enter the ending odometer reading==>"); //user memasukkan jarak akhir
    scanf("%lf", &akhir);
    jarak = akhir - awal;
    tarif = RATE * jarak;
    printf("You traveled a distance of %.1lf miles. At $1.50 per mile, your fare is $%.2lf.\n",jarak, tarif);
}