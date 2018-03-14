#include <stdio.h>
 
int main (void){
 
    int Quantidade = 0;
    scanf ("%d", &Quantidade);
    printf ("%d\n",Quantidade);
 
    int Cedulas = ( Quantidade - (Quantidade%100))/100;
    printf ("%d nota(s) de R$ 100,00\n", Cedulas);
    Quantidade = Quantidade%100 ;
 
    Cedulas = ( Quantidade - (Quantidade%50))/50;
    printf ("%d nota(s) de R$ 50,00\n", Cedulas);
    Quantidade = Quantidade%50 ;
 
    Cedulas = ( Quantidade - (Quantidade%20))/20;
    printf ("%d nota(s) de R$ 20,00\n", Cedulas);
    Quantidade = Quantidade%20 ;
 
    Cedulas = ( Quantidade - (Quantidade%10))/10;
    printf ("%d nota(s) de R$ 10,00\n", Cedulas);
    Quantidade = Quantidade%10 ;
 
    Cedulas = ( Quantidade - (Quantidade%5))/5;
    printf ("%d nota(s) de R$ 5,00\n", Cedulas);
    Quantidade = Quantidade%5 ;
 
    Cedulas = ( Quantidade - (Quantidade%2))/2;
    printf ("%d nota(s) de R$ 2,00\n", Cedulas);
    Quantidade = Quantidade%2 ;
 
 
    printf ("%d nota(s) de R$ 1,00\n", Quantidade);
 
 
 
    return 0;
}