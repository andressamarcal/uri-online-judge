#include<stdio.h>
int main(void){
    int i,count=0;
    float n,sum=0.0,average;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n>0){
            sum+=n;
            count++;
        }
        average=sum/(float)count;
    }
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",average);
    return 0;
}