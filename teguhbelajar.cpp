#include <cstdio>
using namespace std;
typedef long long ll;
    int main(){
        
        ll line;
        ll angka;

        scanf("%lld", &line);

        for(ll i = 0; i < line; i++){

            ll sum1 = 0;
            ll sum2 = 0;

            scanf("%lld", &angka);

            for(ll j = angka; j > 0; j = j / 10){
                
                sum2 = j % 10;
                sum1 = sum1 + sum2;
            }


            printf("%lld\n", sum1);

        }

        return 0;
        
    }