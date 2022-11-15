#include <stdio.h>

int main(void){
    int a, b, hasil = 0;
    scanf("%d %d", &a, &b); //input user

    if (a%2 == 0){ //modulus jika input merupakan bil genap
        for (int i = a+1; i <=b; i+=2){
            hasil+=i;
        }
    }
    else{ // kalau ganjil
        for (int i = a; i <=b; i+=2){
            hasil+=i;
        }
    }

    printf("%d", hasil);
}