#include <stdio.h>
 
int main() {
    int x, i;

    scanf("%d", &x);

    if(x%2==0){
    x++;
    }
    for (i = 1; i <= 6; i++, x += 2){
            printf("%d\n", x);    
    }
    return 0;
}