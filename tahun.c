
int main() 
{
int h1, m1, s1, a, b, c, t;
int h2, m2, s2;

scanf("%d:%d:%d", &h1, &m1, &s1);
scanf("%d jam %d menit %d detik", &a, &b, &c);
scanf("%d", &t);

if(s1 >= 60){
    m1 = m1 + 1;
    s1 = s1 - 60;
}
if(m1 >= 60){
    h1 = h1 + 1;
    m1 = m1 - 60;
}
if(c >= 60){
    b = b + 1;
    c = c - 60;
}
if(b >= 60){
    a = a + 1;
    b = b - 60;
}

h2 = h1 + a + t;

if(h2>=24){
    h2 = h2 - 24;
}#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

if(h2<0){
    h2 += 24;
}

m2 = m1 + b;
s2 = s1 + c;
printf("Mehas akan sampai pada pukul %d:%d:%d waktu setempat\n", h2, m2, s2);

}