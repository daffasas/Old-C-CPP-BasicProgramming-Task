#include <stdio.h>

const double GRAVITY = 9.80; //dalam satuan m/s^2
const double EFFICIENCY = 0.9; //fixed di 90%
const double MASS = 1000; //satuan massa (kg)

int main()
{
    double height, work, flow; //height = ketinggian, work = usaha, flow = debit
    printf("Input height: ");
    scanf("%lf", &height); //user memasukkan geight
    printf("Input flow: ");
    scanf("%lf", &flow); //user masukkan flow
    work = (flow * MASS * GRAVITY * height * EFFICIENCY) / 1e6; //1e6 = 10^6 dirubah jadi megawatt
    printf("Work = %.2lf megawatts\n", work); 
}