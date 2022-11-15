#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int a, b , c, d, e, f, g, akhir;
scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
a = a ^ b;
      a = a ^ c;
      a = a ^ d;
      a = a ^ e;
      a = a ^ f;
      a = a ^ g;
      akhir = a % 2;

      if(akhir == 0)
      {
        printf("Toni");
      }
      else
      {
        printf("Anto");
      }
}