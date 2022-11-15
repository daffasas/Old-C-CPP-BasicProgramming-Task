#include <stdio.h>
#include <math.h>
#define gravitasi 10

int main()
{
	double h, s, t;
	
	while(1)
	{
		printf("Masukkan ketinggian sisi miring (h) dalam cm : ");
		scanf("%lf", &h);
		
		printf("Masukkan panjang sisi miring (s) dalam cm : ");
		scanf("%lf", &s);
		
		printf("Masukkan waktu dari data yang telah diperoleh : ");
		scanf("%lf", &t);
		
		h = h / 100;
		s = s / 100;
		
		double Vy = sqrt(2*gravitasi*h);
		
		double sudut = h/s;
		
		double teta = asin(sudut) * 57.2958;
		
		double Vx = Vy / tan(teta / 57.2958);
		
		double Vtot = sqrt(pow(Vy, 2) + pow(Vx, 2));
		
		double X = Vx * t;
		
		printf("\nKecepatan dari sumbu y (Vy) adalah %.3lf m/s\n", Vy);
		printf("Sudut yang diperoleh dari arc sin(%.3lf) adalah %.3lf derajat\n", sudut, teta);
		printf("Vx = %.3lf m/s \n", Vx);
		printf("Kecepatan total yang diperoleh adalah %.3lf m/s\n", Vtot);
		printf("Jarak(x) perhitungan yang diperoleh adalah %.3lf m\n\n\n", X);
	}
}

