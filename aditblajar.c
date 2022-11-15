#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    int *ptr;

    a = 10;
    b = 5;
    ptr = &a;

    b = b * a * *ptr;
    printf("%d," b);
}