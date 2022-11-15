#include<stdio.h>

int count_greater(int arr[], int n)
{
    int min;
    int counter = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > min) {
            counter++;
        }
 
        if (arr[i] <= min) {
            min = arr[i];
        }
    }
    printf("%d", &min)
 
    return counter;
}

