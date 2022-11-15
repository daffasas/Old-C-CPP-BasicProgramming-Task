#include <stdio.h>

int b = 0;
int MaxKotak(int n){ //fungsi
    n = n/2;
    n = n * (n-1)/2;  //rumus untung menghitung kotak
    return n;
    }
int main() {

    int a;
    scanf("%d",&a); //banyaknya input
    while(a--){
        scanf("%d",&b); //isi inputtan
        printf("%d\n", MaxKotak(b));
    }

     return 0;
}