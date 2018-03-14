#include <stdio.h>

int main(){
   unsigned long long int X, M;

    while(1){
        scanf("%lld %lld", &X, &M);
        if (X==0 && M==0)
            break;
            printf("%lld\n", X*M);
    }
    return 0;
}