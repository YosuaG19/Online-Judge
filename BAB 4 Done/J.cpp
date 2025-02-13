#include<stdio.h>

int main (){
    long long int a, b, c, d;
    scanf("%lld", &a);
    for (int i = 1 ; i <= a; i++)
    {
        d = 0;
        scanf("%lld", &b);
        for (int j = 1; j <= b ; j++)
        {
            scanf("%lld", &c);
            d+=c;
        }
        printf("Case #%d: %lld\n", i, d);
    }
}