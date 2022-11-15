#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int h1, m1, s1, a, b, c, h2, m2, s2, t;
	scanf("%d:%d:%d", &h1, &m1, &s1);
	scanf("%d jam %d menit %d detik", &a, &b, &c );
	scanf("%d", &t);
	
	h2 = h1 + a + t;
	m2 = m1 + b;
	s2 = s1 + c; 
	
	if (s2 >= 60){ //untuk menghindari apabila detik >60
		m2 += 1;
		s2 = s2 - 60;
	}
	if (m2 >= 60){ //untuk menghindari menit >60
		h2 += 1;
		m2 = m2 - 60;
	}
	if (h2 >= 24){ //untuk menghindari jam pas di 24 atau > 24
		h2 = h2 - 24;
	}
	if (h2 < 0){ //untuk menghindari jam bernilai negatif
		h2 = h2 + 24;
	}
	
	printf("Mehas akan sampai pada pukul %d:%d:%d waktu setempat", h2, m2, s2 );
    }