#include<stdio.h>
int main(void){
    long long int input,temp,year,month;
    scanf("%lld",&input);
    year=input/365;
    temp=input%365;
    month=temp/30;
    temp=temp%30;
    printf("%lld ano(s)\n%lld mes(es)\n%lld dia(s)\n",year,month,temp);
    return 0;
}