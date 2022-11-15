#include <stdio.h>

void PrintTerbesar(long arr[1000000], int n, int k)
{
    int i, l, max;
 
    for (int i = 0; i <= n - k; i++) {
        max = arr[i];
 
        for (l = 1; l < k; l++) {
            if (arr[i + l] > max)
                max = arr[i + l];
        }
        printf("%d ", max);
    }
}
 
int main()
{
    int k;
    unsigned long long int p;
    unsigned long long int i;

    //user input banyaknya angka dalam array
    scanf("%llu", &p);
    long arr[p];
    
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < p; i++){
        scanf("%llu", &arr[i]); //input isi array
    }

scanf("%d", &k); //input besarnya kotak yang digeser
if(1 > k && )
PrintTerbesar(arr, n, k);
}