#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n); 
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int l = 0; l < n; l++){
            scanf("%d", &arr[i][l]);
        }
    }

    int i, l = 0, k = 0, m = n;
    while (l < n && k < m){ 
        for (i = k; i < m; ++i){
            printf("%d ", arr[l][i]);
        }
        l++;

        for (i = l; i < n; ++i){ 
            printf("%d ", arr[i][m-1]);
        }
        m--;

        if ( l < n){ 
            for (i = m-1; i >= k; --i)
            {
                printf("%d ", arr[n-1][i]);
            }
            n--;
        }
         if (k < m){ 
            for (i = n-1; i >= l; --i)
            {
                printf("%d ", arr[i][k]);
            }
            k++;    
        }        
    }
    return 0;
}