#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,n2,a,counter;
    int angka[150000];
    scanf("%d",&n);
    while(n--){
        scanf("%d",&n2);
        counter=0;
        a=0;
        for(int i=0;i<n2;i++){
            scanf("%d",&angka[i]);
        }
        for(int i=0;i<n2-1;i++){
            for(int j=i+1;i<n2;j++){
                if(angka[i]<angka[j]){
                    counter++;
                    break;
                }
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}