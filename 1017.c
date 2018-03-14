#include <stdio.h> 

    int main () { 
        double x, y, litros; 
        scanf("%lf %lf", &x, &y); 
        litros = ( y / 12) * x; 
        printf("%.3lf\n", litros); 
        
    return 0; 
    
}