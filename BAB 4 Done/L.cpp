#include<stdio.h>

int main (){
    long long int a, b, c, d;
    scanf("%lld", &a);
    for (int i = 1 ; i <=a ; i++)
    {
        scanf("%lld %lld", &b, &c);
        d = b;
        for (int  j = 0 ; j < 1;)
        {
            if ((b-c) < 0) break;
            b-=c, b++, d++;
        }
        printf("Case #%d: %lld\n", i, d);
    }
    return 0;
}