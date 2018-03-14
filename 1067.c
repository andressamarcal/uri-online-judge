#include<stdio.h>
int main(void){
    int i,n;
    scanf("%d",&n);
    if(n%2==0)
        n=n-1;
    for(i=1;i<=n;i+=2)
        printf("%d\n",i);
    return 0;
}