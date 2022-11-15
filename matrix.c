#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{
    int arr1[50], batas;
    int i, k, l, m;
  
  scanf("%d", &batas);
  
  for( i = 0 ; i < batas ; i++ ){
      
      scanf("%d", &arr1[i]);
      
      m = arr1[i];
      l = 0;
      
      while (m != 0){        
        k = m % 10;
        l = l * 10 + k;
        m = m / 10;
    }
    
    if (l == arr1[i]){
    printf("Mehas pasti suka!\n");
    }
    
    else{
    printf("Jangan ini, deh.\n");}
    }
}