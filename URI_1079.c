#include <stdio.h>
 

double media(double x, double y, double z){
    double m = (x*2.0 + y*3.0 + z*5.0)/10.0;
    return m;

}


int main() {
 
    int n; 
    int i;
    double a, b , c;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("%.1lf\n", media(a, b, c));
    }
    
    
    return 0;
}