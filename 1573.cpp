#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c) && (a||b||c))
    {
        printf("%d\n",(int)cbrt(a*b*c));
    }
    return 0;
}