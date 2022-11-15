#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned long a,b,c,d,e,f;
    scanf("%lu",&a);
    b=a-(a/250)*250;
    c=b-(b/100)*100;
    d=c-(c/50)*50;
    e=d-(d/20)*20;
    f=e-(e/10)*10;
    if(a%5==0 && a>=0 && a<9223372036854775807)
    {
    printf("%lu lembar 250 ribuan\n",a/250);
    printf("%lu lembar 100 ribuan\n",b/100);
    printf("%lu lembar 50 ribuan\n",c/50);
    printf("%lu lembar 20 ribuan\n",d/20);
    printf("%lu lembar 10 ribuan\n",e/10);
    printf("%lu lembar 5 ribuan\n",f/5);
    }
    else if(a%5!=0)
    {
        printf("Harganya jelek :(");
    }
    else
    {
        printf("Harganya jelek :(");
    }
    return 0;
}