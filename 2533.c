#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int casos, numerador = 0, denominador = 0, nota, carga;
    double media;

    while(scanf("%d", &casos) != EOF){
        numerador = denominador = 0;
        while(casos--){
            scanf("%d %d", &nota, &carga);
            numerador += nota * carga;
            denominador += carga;
        }
        media = numerador / (denominador * 100.0);
        printf("%.4lf\n", media);
    }

    return 0;
}