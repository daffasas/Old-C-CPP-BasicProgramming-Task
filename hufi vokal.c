#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    int side1, side2, side3;
    scanf("%d%d%d", &side1, &side2, &side3);
    
    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2) 
            {
                printf("Yeay, membentuk segitiga!");
            }
            else
            {
                printf("Yahh, nggak bisa jadi segitiga :"(");
            }
        }
        else
        {
            printf("Yahh, nggak bisa jadi segitiga :"(");
        }
    }
    else
    {
        printf("Yahh, nggak bisa jadi segitiga :"(");
    }

    return 0;
}