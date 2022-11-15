#include<stdio.h>

int main()
{
    int n,i,fpb;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    fpb=arr[0];
    int m=1;
    while(m<n)
    {
       if(arr[m]%fpb==0)
       {
           m++;
       }
       else
       {
           fpb=arr[m]%fpb;
           i++;
       }
    }
    printf("%d",fpb);
    return 0;
}