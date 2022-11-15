#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tahun, selisih, kabisat_a, kabisat_b, total_kabisat, hari;
    scanf("%d", &tahun);

    if (1900<= tahun && tahun <=9000){
        selisih = tahun - 1900; //1900 menjadi istilahnya "patokan"
        tahun = tahun - 1;
        kabisat_a = (tahun/4) - (tahun/100) + (tahun/400); 
        kabisat_b = (1900/4)-(1900/100)+(1900/400);
        total_kabisat = kabisat_a - kabisat_b; //exception untuk tahun kabisat :)
        hari = (selisih + total_kabisat) % 7; 

        switch(hari){ //switchees <3
            case 0 :
            printf("minggu\n");
            break;
            case 1 : 
            printf("senin\n");
            break;
            case 2 :
            printf("selasa\n");
            break;
            case 3 :
            printf("rabu\n");
            break;
            case 4 :
            printf("kamis\n");
            break;
            case 5 :
            printf("jumat\n");
            break;
            case 6 :
            printf("sabtu\n");
            break;
        
        }
    }

}