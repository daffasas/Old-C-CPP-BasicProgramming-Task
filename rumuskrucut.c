#include <stdio.h>
#include <stdlib.h>
#define PHI 3.14

int main(){
    double Luas_Kerucut,r, PI, tinggi;
    PI = PHI;

    printf("Masukkan Nilai Jari-jari (meter) : \n");
    scanf("%lf",&r);
    printf("Masukkan Nilai Tinggi (meter) : \n");
    scanf("%lf",&tinggi);

    Luas_Kerucut = 0.33333*PI*r*r*tinggi ;
    printf("Volume Kerucut adalah : %lf", Luas_Kerucut);
    return 0;
}