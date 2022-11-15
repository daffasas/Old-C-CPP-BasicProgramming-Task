#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num[] = {1, 2, 3, 4, 5};
    int n = sizeof(num) / sizeof(num[0]);
    int output[n];
    int sum = 1;

    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            for(int j = 1; j < n; j++)
            {
                sum = sum * num[j];
            }
        }

        else
        {
            for(int k = 0; k < n; k++)
            {
                if(!(k == i)) sum = sum * num[k];
            }

        }

        output[i] = sum;
        sum = 1;
    }

    for(int i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}